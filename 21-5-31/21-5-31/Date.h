#pragma once
#include <iostream>

using namespace std;

class Date
{
public:
	// ��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month) const
	{
		// �þ�̬��Ա����һֻҪ�õ����飬�������Լ���һ�㿪��
		static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = monthday[month];
		// �ж����꣬Ȼ���޸�����
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
			day += 1;
		return day;
	}
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 1900, int month = 1, int day = 1)
	{


		// �ж����ڵĺϷ���
		if (year < 0 || month < 1 || month > 12
			|| day < 1 || day > GetMonthDay(year, month))
			cout << "���ڲ��Ϸ�" << endl;




		_year = year;
		_month = month;
		_day = day;
	}
	// �������캯��
	// d2(d1)
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	// ��ֵ���������
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d)
	{


		// ���this��d��һ�������Լ����Լ���ֵҪ����
		if (this == &d)
			return *this;




		_year = d._year;
		_month = d._month;
		_day = d._day;
		return *this;
	}
	// ��������
	~Date()  {}
	// ����+=����
	Date& operator+=(int day)
	{
		// �������Ϊ�������͵���-=
		if (day < 0)
		{
			*this -= -day;
		}
		else
		{
			_day += day;// �������ȼӵ�������
			// ������ڵ����������ϵ��µ���������_month++
			while (_day > GetMonthDay(_year, _month))
			{
				_day -= GetMonthDay(_year, _month);
				_month++;
				// �ж��·��Ƿ񳬹�12�£�����_year++
				if (_month == 13)
				{
					_year++;
					_month = 1;
				}
			}
		}
		return *this;
	}
	// ����+����
	Date operator+(int day)
	{
		// +�����ǽ�һ���µĶ��󷵻أ�+=�Ƕ�thisֱ�Ӳ���
		Date tmp(*this);
		// �������Ѿ�д�õ�+=�����
		tmp += day;
		return tmp;
	}
	// ����-����
	Date operator-(int day)
	{
		Date tmp(*this);
		tmp -= day;
		return tmp;
	}
	// ����-=����
	Date& operator-=(int day)
	{
		// ��������Ǹ������͵���+=
		if (day < 0)
		{
			*this += -day;
		}
		else
		{
			_day -= day;
			while (_day < 0)
			{
				// ��Ϊ��Ҫ���ϸ��µ�����������month--
				// Ȼ���ж������ڵ��µĺϷ���
				_month--;
				if (_month == 0)
				{
					_month = 12;
					_year--;
				}
				_day += GetMonthDay(_year, _month);
			}
		}

		return *this;
	}
	// ǰ��++
	Date& operator++()
	{
		*this += 1;
		return *this;
	}
	// ����++
	Date operator++(int) 
	{
		// ����һ��*this
		Date tmp(*this);
		*this += 1;
		return tmp;
	}
	// ����--
	Date operator--(int) 
	{
		// ����һ��*this
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}
	// ǰ��--
	Date& operator--()
	{
		*this -= 1;
		return *this;
	}

	// �Ƚ������ֻҪд��2��
	// �Ϳ��Ը��ó��������еıȽ������

	// >���������
	bool operator>(const Date& d) const 
	{
		// ����겻��ȣ��ͷ�����ݸ����
		if (_year != d._year) return _year > d._year;
		// ��������ȵ����·ݲ���ȣ��ͷ����·ݸ����
		if (_month != d._month) return _month > d._month;
		// ������¶���ȣ��ͷ������������
		return _day > d._day;
	}
	// ==���������
	bool operator==(const Date& d) const
	{
		return (_year == d._year && _month == d._month
			&& _day == d._day);
	}
	// >=���������
	bool operator >= (const Date& d) const
	{
		return (*this > d || *this == d);
	}
	// <���������
	bool operator < (const Date& d) const
	{
		return !(*this >= d);
	}
	// <=���������
	bool operator <= (const Date& d) const
	{
		return !(*this > d);
	}
	// !=���������
	bool operator != (const Date& d) const
	{
		return !(*this == d);
	}
	// ����-���� ��������
	int operator-(const Date& d)
	{
		int day = 0;
		Date maxDate = d;
		Date minDate = *this;
		if (*this > d)
		{
			maxDate = *this;
			minDate = d;
		}
		while (minDate != maxDate)
		{
			minDate += 1;
			day++;
		}
		return day;
	}
	friend ostream& operator<<(ostream& out, const Date& d);
	// �����ʱ�򣬲�����const���Σ���Ϊ��ı����d��ֵ
	friend istream& operator>>(istream& in, Date& d);
	
private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "-" << d._month << "-" << d._day;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}