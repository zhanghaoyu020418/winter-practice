#define _CRT_SECURE_NO_WARNINGS 1


//
//long long Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}


//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n - 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	if (input <= 2)
//		c = 1;
//
//	else
//	{
//		for (int i = 3; i <= input; i++)
//		{
//			c = (a + b) % 10007;
//			a = b % 10007;
//			b = c % 10007;
//		}
//	}
//
//	printf("%d", c % 10007);
//
//	return 0;
//}
//



//int main()
//{
//	long long n;
//	cin >> n;
//	long long ans = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ans += i;
//	}
//
//	cout << ans;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//#define MAX 1000000
//
//int main()
//{
//	
//
//	int arr[MAX] = { 0, 1, 2 };
//	int i = 0;
//
//	for (i = 3; i <= 5; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//
//	cout << arr[5] % 10007;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//#define MAX 100000
//int main()
//{
//	int n;
//	int i;
//	int arr[MAX] = {0, 1, 1};
//	scanf("%d", &n);
//	for (i = 3; i <= n; i++)
//	{
//		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
//	}
//
//	printf("%d", arr[n]);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//long Fibonacci(long n)
//{
//	if (n <= 2) 
//		return 1;
//
//	long f1 = 1, f2 = 1, f3;
//	for (int i = 3; i <= n; ++i)
//	{
//		f3 = (f1 + f2) % 10007;
//		f1 = f2 % 10007;
//		f2 = f3 % 10007;
//	}
//	return f3;
//}
//
//int main()
//{
//	long n;
//	cin >> n;
//	cout << Fibonacci(n) % 10007 << endl;
//	return 0;
//}