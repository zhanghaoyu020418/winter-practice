#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Time
//{
//public:
//	//���캯��ʵ�����ݳ�Ա�ĳ�ʼ��
//	//1.����ֱ��������ֱ�ӳ�ʼ��
//	//Time()
//	//{
//	//	hour = 18;
//	//	minute = 18;
//	//	sec = 18;
//	//}
//	//2.Ҳ��������������Ȼ�������⹹�캯��
//	Time();
//	void set_time();
//	void show_time();
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//
//Time::Time()
//{
//	hour = 2;
//	minute = 2;
//	sec = 2;
//}
//
//void Time::set_time()
//{
//	cin >> hour >> minute >> sec;
//}
//
//void Time::show_time()
//{
//	cout << hour << ':' << minute << ':' << sec << endl;
//}
//
//int main()
//{
//	Time t1;
//	t1.set_time();
//	t1.show_time();
//	Time t2;
//	t2.show_time();
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//class Book
//{
//public:
//	Book(int, float, const char*, string);//�������Ĺ��캯��,�����Զ���ÿ����������ݳ�Ա
//	void show_book();
//private:
//	int id;
//	float price;
//	char book_name[20];
//	string author_name;
//};
//
//Book::Book(int i, float p, const char* n1, string n2)//����������ݳ�ʼ��ÿ����Ա����
//{
//	id = i;
//	price = p;
//	strcpy(book_name, n1);
//	author_name = n2;
//}
//
//void Book::show_book()
//{
//	cout << "id :" << id << endl;
//	cout << "price :" << price << endl;
//	cout << "book_name :" << book_name << endl;
//	cout << "author_name :" << author_name << endl;
//}
//
//int main()
//{
//	Book b1(1, 55.5, "�����뺣", "������");//�����ã�����+������(��ʼ��������)
//	b1.show_book();
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//class Book
//{
//public:
//	//Book(int, float, const char*, string);//�������Ĺ��캯��,�����Զ���ÿ����������ݳ�Ա
//	Book(int i, float p, const char* n1, string n2) :id(i), price(p), author_name(n2)//�����ĳ�ʼ���б�
//	{
//		strcpy(book_name, n1);
//	}
//	void show_book();
//private:
//	int id;
//	float price;
//	char book_name[20];
//	string author_name;
//};
//
//void Book::show_book()
//{
//	cout << "id :" << id << endl;
//	cout << "price :" << price << endl;
//	cout << "book_name :" << book_name << endl;
//	cout << "author_name :" << author_name << endl;
//}
//
//int main()
//{
//	Book b1(1, 55.5, "�����뺣", "������");//�����ã�����+������(��ʼ��������)
//	b1.show_book();
//	return 0;
//}