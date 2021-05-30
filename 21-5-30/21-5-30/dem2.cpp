#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

class String
{
	String(const char* str = 0)
	{
		if (str)
		{
			_data = new char[strlen(str) + 1];// ���ٿռ�����һ��λ�ø�'\0'
			strcpy(_data, str);// �����ݿ�����_data��
		}
		else// ���strΪ���ַ�����Ĭ����'\0'
		{
			_data = new char[1];
			*_data = '\0';
		}
	}

	String& operator=(const String& str)
	{
		if (this == &str)
			return *this;

		// ɾ��ԭ���Ŀռ�
		delete[] _data;
		// ����һ����strһ���Ĵ�С�ռ�
		_data = new char[strlen(str._data) + 1];
		strcpy(_data, str._data);
		return *this;
	}

private:
	char* _data;
};

int main()
{
	return 0;
}