//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//class Box
//{
//public:
//	Box(int h = 10) :height(h) { cout << "������ " << height << endl; }
//	~Box() { cout << "������" << height << endl; }
//private:
//	int height;
//};
//
//Box b1(1);//ȫ�ֱ�������mainִ��֮ǰ��ʼ���ù��쵽mainִ�н�������
//int main()
//{
//	static Box b2(2);//static����ľֲ��������ӿ�ʼ������ù��쵽main�����н�������
//	Box b3(3);//�ֲ��������Ӷ���λ�õ��ù��쵽main��������
//
//	{
//		Box b4(4);//�ӽ��뺯�����쵽��������������
//	}
//
//	Box* pb = new Box(5);//new����Ķ�̬�ڴ�,��newλ�õ��ù��쵽delete��������
//	delete pb;
//
//	return 0;
//}