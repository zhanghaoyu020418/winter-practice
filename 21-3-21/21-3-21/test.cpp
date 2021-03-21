#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
struct student
{
	int num;
	char name[20];
	float score[3];
};
int getMax(student  *ps);
int main()
{
	struct student stu[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> stu[i].num; 
		cin >> stu[i].name;
		for (int t = 0; t < 3; t++)
			cin >> stu[i].score[t];
	}
	int t = getMax(stu);
	for (int i = 0; i < 3; i++)
		if (t == stu[i].num)
			cout << stu[i].num << " " << stu[i].name << " " << stu[i].score[0] << " " << stu[i].score[1] << " " << stu[i].score[2];
	return 0;
}
int getMax(student *ps)
{
	int maxi = 0;
	int summax = -1;
	for (int i = 0; i < 3; i++)
	{
		int sum1 = 0;
		for (int j = 0; j < 3; j++)
		{
			sum1 += ps[i].score[j];
		}
		if (summax < sum1)
		{
			summax = sum1;
			maxi = i;
		}
	}
	return ps[maxi].num;
}