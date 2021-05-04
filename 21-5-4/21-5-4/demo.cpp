#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

int main(int argc, char* argv[])
{
	struct stat buff;
	printf("%o\n, %x\n", argv, argv);
	cout << stat(argv[0], &buff) << endl;
	cout << argv[0];
	return 0;
}