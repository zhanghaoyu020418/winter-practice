//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//struct stu
//{
//	int id;
//	char name[20];
//	double score;
//};
//
//#define OFFSETOF(sname, mname) (int)&(((stu*)0)->mname)
////ƫ�������ǳ�Ա��ṹ����׵�ַ�ľ��룬���Ծ��ǽ���Ա�ĵ�ַ-�ṹ����׵�ַ�����������Ƚ��鷳
////����ͨ�����Խ�0��Ϊ�ṹ����׵�ַ����0ǿת��Ϊ�ṹ������Ȼ��->��Ա������0���͵���û��
////�ǵ�Ҫ����ַ�û�Ϊint������������������
//
//int main()
//{
//	cout << OFFSETOF(stu, id) << endl;
//	cout << OFFSETOF(stu, name) << endl;
//	cout << OFFSETOF(stu, score) << endl;
//	
//	return 0;
//}