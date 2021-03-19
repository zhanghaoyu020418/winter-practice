//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include <cstdio>
//
//using namespace std;
//
//class Dog
//{
//public:
//	void GetName();
//	void GetAge();
//	void GetSex();
//	void GetWeight();
//	void show_data();
//private:
//	char * name;
//	int age;
//	char sex;
//	float weight;
//};
//
//void Dog::GetAge()
//{
//	cin >> age;
//}
//
//void Dog::GetName()
//{
//	char nm[20];
//	cin >> nm;
//	this->name = new char[strlen(nm) + 1];
//	strcpy(name, nm);
//}
//
//void Dog::GetSex()
//{
//	cin >> sex;
//}
//
//void Dog::GetWeight()
//{
//	cin >> weight;
//}
//
//void Dog::show_data()
//{
//	cout << "It is my dog." << endl;
//	cout << "Its name is " << name << "." << endl;
//	cout << "It is " << age << " years old." << endl;
//	if (sex == 'm')
//		printf("It is %s.\n", "male");
//	else
//		printf("It is %s.\n", "female");
//	printf("It is %.1f kg.\n", weight);
//}
//
//int main()
//{
//	Dog dog;
//    dog.GetName();
//    dog.GetAge();
//    dog.GetSex();
//    dog.GetWeight();
//    dog.show_data();
//
//	return 0;
//}