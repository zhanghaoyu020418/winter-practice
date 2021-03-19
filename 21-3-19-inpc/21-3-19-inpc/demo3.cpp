#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

struct student

{//成员列表

	int num; //学号

	char name[20]; //姓名

	float score[3]; //存放3门课成绩

	bool operator< (const student& stu)
	{
		int sum1 = score[0] + score[1] + score[2];
		int sum2 = stu.score[0] + stu.score[1] + stu.score[2];
		return sum1 < sum2;
	}

};

int getMax(student  *ps)// 返回3个学生3门课成绩中最高分的学生序号
{

	//请完成函数体
	sort(ps, ps + 3);

	return ps[2].num;
}

int main()

{  //定义变量

	struct student stu[3];

	//从键盘输入3个学生的学号、姓名、3门课的成绩
	for (int i = 0; i < 3; i++)
	{
		cin >> stu[i].name >> stu[i].num;
		cin >> stu[i].score[0] >> stu[i].score[1] >> stu[i].score[2];
	}

	//调用子函数getMax找出最高分的学生序号
	int id = getMax(stu);

	//输出最高分学生的数据（包括学号、姓名、3门课成绩）

	cout << stu[id].num << ' ' << stu[id].name << ' ' 
		<< stu[id].score[0] << stu[id].score[1] << stu[id].score[2] << endl;

	return 0;

}