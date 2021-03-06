#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//string str1, str2;
//	//cin >> str1 >> str2;
//	//str1.insert(str1.size(), str2);
//	//string str = "zhy";
//
//	//string sstr = str.insert(0, 2, '6');
//
//	//cout << sstr << endl;  
//
//	//string str = "zhy";
//	//str.insert(0, 2, '1');
//	//cout << sstr << endl;
//
//	//string str = "zhy";
//
//	//string sstr = str.insert(0, "hello ");
//
//	//cout << sstr << endl;
//
//	//string str = "zhy";
//
//	//str.insert(0, "hello ");
//
//	//cout << str << endl;
//
//	string str;
//
//	char a = str[4];
//
//	cout << a << endl;
//
//
//	return 0;
//}

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Book
{
public:
	Book();
	Book(int i, float p) :id(i), price(p) {}
	Book(int i) :id(i) {}
	void show_book();
private:
	int id;
	float price;
	string author_name;
};

Book::Book()
{
	id = 1;
	price = 66.6;
	author_name = "haha";
}

void Book::show_book()
{
	cout << id << endl;
	cout << price << endl;
	cout << author_name << endl;
}

int main()
{
	Book b1;
	Book b2(1);
	b1.show_book();
	b2.show_book();
	return 0;
}