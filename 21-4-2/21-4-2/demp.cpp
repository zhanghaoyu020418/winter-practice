#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "classic.h"

using namespace std;

int main()
{
	Cd c1("1", "2", 3, 4.4);
	Cd c2;
	c2.operator=(c1);
	Classic cla1("1", "2", "3", 4, 5.5);
	Classic cla2;
	cla2 = cla1;
	cla2.Classic::Report();
	return 0;
}