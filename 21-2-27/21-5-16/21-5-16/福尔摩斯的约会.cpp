//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//string weekday[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" }; // �������
//
//int main()
//{
//	string str[4];
//	for (int i = 0; i < 4; i++) {
//		cin >> str[i];
//	}
//    // ����ǰ�����ַ���
//	char s[2];
//	int index = 0;
//	for (int i = 0; i < str[0].size() && str[1].size(); i++)
//	{
//		if (index == 0)
//		{
//			if (str[0][i] == str[1][i] && (str[0][i] <= 'G' && str[0][i] >= 'A'))// ��ͬ��дӢ���ַ�
//				s[index++] = str[0][i];
//		}
//		else if (index == 1)
//		{
//			if (str[0][i] == str[1][i]
//				&& ((str[0][i] <= 'N' && str[0][i] >= 'A') || isdigit(str[0][i])))// ��ͬ���ַ�
//				s[index++] = str[0][i];
//		}
//		else if (index == 2)
//			break;
//	}
//    // �����������ַ���
//	int sec;
//	for (sec = 0; sec < str[2].size() && sec < str[3].size(); sec++)
//	{
//		if (str[2][sec] == str[3][sec] && isalpha(str[2][sec]))// ��ͬӢ���ַ���λ��
//			break;
//	}
//    // ������
//	int t = s[1] <= '9' ? s[1] - '0' : s[1] - 'A' + 10;
//	cout << weekday[(s[0] - 'A')];
//	printf(" %02d:%02d", t, sec);
//	return 0;
//}