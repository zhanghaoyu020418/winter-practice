#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

//int main ()
//{	int* p = new int(1);
//
//	class Solution {
//	public:
//		Node* connect(Node* root) {
//			if (root == nullptr)
//				return root;
//			// ��¼һ�µ�ǰ�����ϵĽ��λ��
//			Node* cur = root;
//			// ���û�е����һ��ͼ���
//			while (cur != nullptr) {
//				// ��dummy��prevָ��ָ����һ��Ľ�㣬����һ��Ľ�㴮������
//				// dummy�����ã���Ϊ�����һ�����ʱ��prev�Ѿ�Ϊ����
//				// ��Ҫ����һ�������ͷ���
//				Node* dummy = new Node(-1);
//				// prev����һ��Ľ��
//				Node* prev = dummy;
//
//				// �������Ľ��û���ߵ���� 
//				// ***��Ϊ������������������ֻҪһ����һ���ڵ�˵����һ�㶼������
//				// �������жϵ�ʱ�򣬼���cur->left != nullptr�Ϳ��ԣ��ж����һ�ε�ѭ��
//				// ���Ҫ�Ͳ������������ķ����Ƚ�
//				while (cur != nullptr && cur->left != nullptr) {
//					// ��һ��Ľ�������
//					// ��������ߣ�Ȼ������������
//					prev->next = cur->left;
//					prev = prev->next;
//					// �������ұߣ�Ȼ������������
//					prev->next = cur->right;
//					prev = prev->next;
//					// ����Ľ�������ߣ���Ϊ������һ�ε�ѭ��������Ľ���Ѿ�����������
//					cur = cur->next;
//				}
//				// cur��ֵ����һ��Ľ�㿪ͷ
//				cur = dummy->next;
//			}
//			return root;
//		}
//	};
//	return 0;
//}


//class Complex
//{
//public:
//	// ȱʡ�Ĺ��캯��
//	Complex(int real = 0, int image = 0)
//	{
//		_real = real;
//		_image = image;
//	}
//	// ���ݵĲ����Ƕ���c������
//	Complex(const Complex& c)
//	{
//		_real = c._real;
//		_image = c._image;
//	}
//
//private:
//	int _real; // ʵ��
//	int _image;// �鲿
//};
//
//int main()
//{
//	Complex d1;
//	Complex d2 = d1;
//	return 0;
//}

class String
{
	String(const char* str = 0)
	{
		if (str)
		{
			_data = new char[strlen(str) + 1];// ����һ��λ�ø�'\0'
			strcpy(_data, str);
		}
		else// ���strΪ���ַ�����Ĭ����'\0'
		{
			_data = new char[1];
			*_data = '\0';
		}
	}

	inline
	String(const String& str)
	{
		// ���ٺ�str��_dataһ���Ŀռ��С��+1��Ϊ�˷Ž�β��'\0'
		_data = new char[strlen(str._data) + 1];
		// ��������
		strcpy(_data, str._data);
	}

	~String()// ���������ǵ�Ҫ�ͷ��ڴ�
	{
		delete[]_data;
	}
private:
	char* _data;
};