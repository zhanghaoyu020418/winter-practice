//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <complex>
//#include <vector>
//
//using namespace std;
//
//class Account
//{
//public:
//	static double m_rate;
//	static void set_rate(const double& x) { m_rate = x; }
//};
//double Account::m_rate = 10.0;// 给静态成员数据初始化
//
////class A
////{
////public:
////	static A& getInstance();// 获得静态的对象
////	void setup();// 泛指一系列函数
////private:
////	A();// 构造函数不能调用
////	A(const A& rhs);// 拷贝构造不能调用
////	static A a;// 唯一的对象
////};
//
//class A
//{
//public:
//	static A& getInstance();// 获得静态的对象
//	void setup(); /*{
//		cout << "hello world" << endl;
//	}*/ // 泛指一系列函数
//	// ...
//private:
//	A();// 构造函数不能调用
//	A(const A& rhs);// 拷贝构造不能调用
//	// ...
//	int a;
//};
//
//A& A::getInstance()
//{
//	static A a;
//	return a;// 唯一的对象
//}
//
//int main()
//{
//	//Account::set_rate(1.0);// 可以直接用类名调用静态函数
//
//	//Account a;// 也可以实例化对象调用静态函数
//	//a.set_rate(2.0);
//
//	//A::getInstance().setup();
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	//vector<int> v2(v1);
//	//for (auto i : v2)
//		//cout << i << ' ';
//	return 0;
//}