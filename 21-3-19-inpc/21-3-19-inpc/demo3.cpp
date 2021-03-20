#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

struct student

{

	int num; 

	char name[20];

	float score[3]; 

};


int getMax(student  *ps)
{
	int sum[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			sum[i] += ps[i].score[j];
	}
	int Maxi = -1, Max = -1;
	for (int i = 0; i < 3; i++)
	{
		if (sum[i] > Max)
			Max = sum[i], Maxi = i;
	}
	return ps[Maxi].num;
}

int main()

{

	struct student stu[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> stu[i].num >> stu[i].name;
		cin >> stu[i].score[0] >> stu[i].score[1] >> stu[i].score[2];
	}

	int id = getMax(stu);

	for (int i = 0; i < 3; i++)
	{
		if (stu[i].num == id)
		{
			cout << stu[i].num << ' ' << stu[i].name << ' '
				<< stu[i].score[0] << ' ' << stu[i].score[1]  << ' ' << stu[i].score[2] << endl;
		}
	}


	return 0;

}