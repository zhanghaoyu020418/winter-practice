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
			// 记录一下当前层数上的结点位置
			Node* cur = root;
			// 如果没有到最后一层就继续
			while (cur != nullptr) {
				// 用dummy和prev指针指向下一层的结点，将下一层的结点串联起来
				// dummy的作用：因为到最后一层结点的时候，prev已经为空了
				// 需要设置一个虚拟的头结点
				Node* dummy = new Node(-1);
				// prev是下一层的结点
				Node* prev = dummy;

				// 如果本层的结点没有走到最后 
				// ***因为这是满二叉树，所以只要一层有一个节点说明这一层都是满的
				// 所以在判断的时候，加上cur->left != nullptr就可以，判断最后一次的循环
				// 这点要和不是满二叉树的方法比较
				while (cur != nullptr && cur->left != nullptr) {
					// 下一层的结点的连接
					// 先连接左边，然后单链表往后走
					prev->next = cur->left;
					prev = prev->next;
					// 再连接右边，然后单链表往后走
					prev->next = cur->right;
					prev = prev->next;
					// 本层的结点往后走，因为经过下一次的循环，本层的结点已经连接起来了
					cur = cur->next;
				}
				// cur赋值成下一层的结点开头
				cur = dummy->next;
			}
			return root;
		}
	};
	return 0;
}