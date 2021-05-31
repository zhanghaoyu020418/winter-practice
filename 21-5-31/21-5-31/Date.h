#pragma once
#include <iostream>

using namespace std;

class Date
{
public:
	// 获取某年某月的天数
	int GetMonthDay(int year, int month) const
	{
		// 用静态成员修饰一只要用的数组，这样可以减少一点开销
		static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = monthday[month];
		// 判断闰年，然后修改天数
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
			day += 1;
		return day;
	}
	// 全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1)
	{


		// 判断日期的合法性
		if (year < 0 || month < 1 || month > 12
			|| day < 1 || day > GetMonthDay(year, month))
			cout << "日期不合法" << endl;




		_year = year;
		_month = month;
		_day = day;
	}
	// 拷贝构造函数
	// d2(d1)
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	// 赋值运算符重载
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d)
	{


		// 如果this和d是一个对象，自己给自己赋值要特判
		if (this == &d)
			return *this;




		_year = d._year;
		_month = d._month;
		_day = d._day;
		return *this;
	}
	// 析构函数
	~Date()  {}
	// 日期+=天数
	Date& operator+=(int day)
	{
		// 如果天数为负数，就调用-=
		if (day < 0)
		{
			*this -= -day;
		}
		else
		{
			_day += day;// 将天数先加到日期中
			// 如果日期的天数不符合当月的天数就让_month++
			while (_day > GetMonthDay(_year, _month))
			{
				_day -= GetMonthDay(_year, _month);
				_month++;
				// 判断月份是否超过12月，否则将_year++
				if (_month == 13)
				{
					_year++;
					_month = 1;
				}
			}
		}
		return *this;
	}
	// 日期+天数
	Date operator+(int day)
	{
		// +重载是将一个新的对象返回，+=是对this直接操作
		Date tmp(*this);
		// 用上面已经写好的+=运算符
		tmp += day;
		return tmp;
	}
	// 日期-天数
	Date operator-(int day)
	{
		Date tmp(*this);
		tmp -= day;
		return tmp;
	}
	// 日期-=天数
	Date& operator-=(int day)
	{
		// 如果天数是负数，就调用+=
		if (day < 0)
		{
			*this += -day;
		}
		else
		{
			_day -= day;
			while (_day < 0)
			{
				// 因为是要加上个月的天数，所以month--
				// 然后判断天数在当月的合法性
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
	// 前置++
	Date& operator++()
	{
		*this += 1;
		return *this;
	}
	// 后置++
	Date operator++(int) 
	{
		// 保留一份*this
		Date tmp(*this);
		*this += 1;
		return tmp;
	}
	// 后置--
	Date operator--(int) 
	{
		// 保留一份*this
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}
	// 前置--
	Date& operator--()
	{
		*this -= 1;
		return *this;
	}

	// 比较运算符只要写出2个
	// 就可以复用出其他所有的比较运算符

	// >运算符重载
	bool operator>(const Date& d) const 
	{
		// 如果年不相等，就返回年份更大的
		if (_year != d._year) return _year > d._year;
		// 如果年份相等但是月份不相等，就返回月份更大的
		if (_month != d._month) return _month > d._month;
		// 如果年月都相等，就返回天数更大的
		return _day > d._day;
	}
	// ==运算符重载
	bool operator==(const Date& d) const
	{
		return (_year == d._year && _month == d._month
			&& _day == d._day);
	}
	// >=运算符重载
	bool operator >= (const Date& d) const
	{
		return (*this > d || *this == d);
	}
	// <运算符重载
	bool operator < (const Date& d) const
	{
		return !(*this >= d);
	}
	// <=运算符重载
	bool operator <= (const Date& d) const
	{
		return !(*this > d);
	}
	// !=运算符重载
	bool operator != (const Date& d) const
	{
		return !(*this == d);
	}
	// 日期-日期 返回天数
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
	// 输入的时候，不能用const修饰，因为会改变对象d的值
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