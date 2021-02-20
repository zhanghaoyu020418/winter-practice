#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Sub(vector<int> &A, vector<int> &B)
{
	int t = 0;//判断是否要借位
	vector<int> C;
	for (int i = 0; i < A.size(); i++)
	{
		if (i >= B.size())
			C.push_back(A[i]);
		else
		{
			if (A[i] - B[i] > 0)
			{
				C.push_back(A[i] - B[i] - t);
				t = 0;
			}
			else
			{
				C.push_back(A[i] - B[i] + 10 - t);
				t = 1;
			}
		}
	}
	return C;
}

int main()
{
	int flag = 0;
	string num1, num2;
	cin >> num1 >> num2;
	if (num1 < num2)
		flag = 1;

	vector<int> A, B;
	//倒序数字放入数组中
	for (int i = num1.size() - 1; i >= 0; i--)
		A.push_back(num1[i] - '0');
	for (int i = num2.size() - 1; i >= 0; i--)
		B.push_back(num2[i] - '0');


	vector<int> C;
	if (flag)
		C = Sub(B, A);
	else
		C = Sub(A, B);


	if (flag)
		cout << "-";
	for (int i = C.size() - 1; i >= 0; i--)
	{
		cout << C[i];
	}

	return 0;
}