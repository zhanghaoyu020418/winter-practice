#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>

using namespace std;

struct student

{//��Ա�б�

	int num; //ѧ��

	char name[20]; //����

	float score[3]; //���3�ſγɼ�

	bool operator< (const student& stu)
	{
		int sum1 = score[0] + score[1] + score[2];
		int sum2 = stu.score[0] + stu.score[1] + stu.score[2];
		return sum1 < sum2;
	}

};

int getMax(student  *ps)// ����3��ѧ��3�ſγɼ�����߷ֵ�ѧ�����
{

	//����ɺ�����
	sort(ps, ps + 3);

	return ps[2].num;
}

int main()

{  //�������

	struct student stu[3];

	//�Ӽ�������3��ѧ����ѧ�š�������3�ſεĳɼ�
	for (int i = 0; i < 3; i++)
	{
		cin >> stu[i].name >> stu[i].num;
		cin >> stu[i].score[0] >> stu[i].score[1] >> stu[i].score[2];
	}

	//�����Ӻ���getMax�ҳ���߷ֵ�ѧ�����
	int id = getMax(stu);

	//�����߷�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���

	cout << stu[id].num << ' ' << stu[id].name << ' ' 
		<< stu[id].score[0] << stu[id].score[1] << stu[id].score[2] << endl;

	return 0;

}