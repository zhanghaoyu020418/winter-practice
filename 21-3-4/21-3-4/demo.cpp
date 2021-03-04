#define _CRT_SECURE_NO_WARNINGS 1
////
////#include <iostream>
////#include <algorithm>
////
////using namespace std;
////
////int main()
////{
////	int a, b, c;
////	cin >> a >> b >> c;
////	if (a < b) swap(a, b);
////	if (a < c) swap(a, c);
////	if (a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
////	else
////	{
////		cout << "TRIANGULO ACUTANGULO" << endl;
////		if (a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
////		if (b == c && b != a || a == b && a != c || a == c && a != b) cout << "TRIANGULO ISOSCELES" << endl;
////	}
////	return 0;
////}
////
////
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int h = 0, m = 0;
//	if (c > a)
//	{
//		h = c - a;
//		if (d > b) m = d - b;
//		else if (d < b) h--, m = 60 + d - b;
//	}
//	else if (c < a)
//	{
//		h = 24 + c - a;
//		if (d > b) m = d - b;
//		else if (d < b) h--, m = 60 + d - b;
//	}
//	else if (c == a)
//	{
//		if (d == b) h = 24;
//		else if (d < b) h = 23, m = 60 + d - b;
//		else if (d > b) h = 0, m = d - b;
//
//	}
//	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", h, m);
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	double n1, n2, n3, n4;
//	scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
//	double X = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
//	printf("Media: %.1lf\n", X);
//	if (X >= 7.0) cout << "Aluno aprovado." << endl;
//	else if (X < 5.0) cout << "Aluno reprovado." << endl;
//	else if (X < 7.0 && X >= 5.0)
//	{
//		cout << "Aluno em exame." << endl;
//		float Y; cin >> Y;
//		printf("Nota do exame: %.1f\n", Y);
//		double Z = (X + Y) / 2.0;
//		if (Z >= 5.0) cout << "Aluno aprovado." << endl;
//		else cout << "Aluno reprovado." << endl;
//		printf("Media final: %.1f\n", Z);
//	}
//	return 0;
//}
#include <iostream>

using namespace std;

int main() {
	double N1, N2, N3, N4, X, Y, Z;
	cin >> N1 >> N2 >> N3 >> N4;
	X = (N1 * 2.0 + N2 * 3.0 + N3 * 4.0 + N4 * 1.0) / (1.0 + 2.0 + 3.0 + 4.0);
	cout.flags(ios::fixed);
	cout.precision(1);
	cout << "Media: " << X << endl;

	if (X >= 7.0) {
		cout << "Aluno aprovado." << endl;
		return 0;
	}

	if (X < 5.0) {
		cout << "Aluno reprovado." << endl;
		return 0;
	}

	cout << "Aluno em exame." << endl;
	cin >> Y;
	cout << "Nota do exame: " << Y << endl;
	Z = (X + Y) / 2.0;
	if (Z >= 5.0) {
		cout << "Aluno aprovado." << endl;
	}
	else {
		cout << "Aluno reprovado." << endl;
	}
	cout << "Media final: " << Z << endl;

	return 0;

}