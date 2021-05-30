#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

class String
{
	String(const char* str = 0)
	{
		if (str)
		{
			_data = new char[strlen(str) + 1];// 开辟空间留下一个位置给'\0'
			strcpy(_data, str);// 将内容拷贝到_data中
		}
		else// 如果str为空字符串就默认是'\0'
		{
			_data = new char[1];
			*_data = '\0';
		}
	}

	String& operator=(const String& str)
	{
		if (this == &str)
			return *this;

		// 删掉原来的空间
		delete[] _data;
		// 开辟一个和str一样的大小空间
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