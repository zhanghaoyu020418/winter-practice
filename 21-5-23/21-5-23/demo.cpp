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
//double Account::m_rate = 10.0;// ����̬��Ա���ݳ�ʼ��
//
////class A
////{
////public:
////	static A& getInstance();// ��þ�̬�Ķ���
////	void setup();// ��ָһϵ�к���
////private:
////	A();// ���캯�����ܵ���
////	A(const A& rhs);// �������첻�ܵ���
////	static A a;// Ψһ�Ķ���
////};
//
//class A
//{
//public:
//	static A& getInstance();// ��þ�̬�Ķ���
//	void setup(); /*{
//		cout << "hello world" << endl;
//	}*/ // ��ָһϵ�к���
//	// ...
//private:
//	A();// ���캯�����ܵ���
//	A(const A& rhs);// �������첻�ܵ���
//	// ...
//	int a;
//};
//
//A& A::getInstance()
//{
//	static A a;
//	return a;// Ψһ�Ķ���
//}
//
//int main()
//{
//	//Account::set_rate(1.0);// ����ֱ�����������þ�̬����
//
//	//Account a;// Ҳ����ʵ����������þ�̬����
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