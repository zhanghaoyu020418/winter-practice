#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main ()
{
	int* p = new int(1);

	class Solution {
	public:
		Node* connect(Node* root) {
			if (root == nullptr)
				return root;
			// ��¼һ�µ�ǰ�����ϵĽ��λ��
			Node* cur = root;
			// ���û�е����һ��ͼ���
			while (cur != nullptr) {
				// ��dummy��prevָ��ָ����һ��Ľ�㣬����һ��Ľ�㴮������
				// dummy�����ã���Ϊ�����һ�����ʱ��prev�Ѿ�Ϊ����
				// ��Ҫ����һ�������ͷ���
				Node* dummy = new Node(-1);
				// prev����һ��Ľ��
				Node* prev = dummy;

				// �������Ľ��û���ߵ���� 
				// ***��Ϊ������������������ֻҪһ����һ���ڵ�˵����һ�㶼������
				// �������жϵ�ʱ�򣬼���cur->left != nullptr�Ϳ��ԣ��ж����һ�ε�ѭ��
				// ���Ҫ�Ͳ������������ķ����Ƚ�
				while (cur != nullptr && cur->left != nullptr) {
					// ��һ��Ľ�������
					// ��������ߣ�Ȼ������������
					prev->next = cur->left;
					prev = prev->next;
					// �������ұߣ�Ȼ������������
					prev->next = cur->right;
					prev = prev->next;
					// ����Ľ�������ߣ���Ϊ������һ�ε�ѭ��������Ľ���Ѿ�����������
					cur = cur->next;
				}
				// cur��ֵ����һ��Ľ�㿪ͷ
				cur = dummy->next;
			}
			return root;
		}
	};
	return 0;
}