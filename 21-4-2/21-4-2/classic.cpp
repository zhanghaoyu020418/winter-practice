#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
#include "classic.h"

using namespace std;

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}
Cd& Cd::operator=(const Cd& d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}


Classic::Classic() :Cd()
{
	work[0] = '\0';
}

Classic::Classic(const Classic& c) : Cd(c)//（基类 = 派生类）派生类可以赋值给基类 
{
	strcpy(work, c.work);
}

Classic::Classic(const char * s1, const char* s2, const char * s3, int n, double x) :
	Cd(s1, s2, n, x)
{
	strcpy(work, s3);
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
		return *this;
	// *this = c;
	this->Cd::operator=(c);
	strcpy(work, c.work);
	return *this;
}

void Classic::Report() const
{
	cout << performers << endl;
	cout << label << endl;
	cout << work << endl;
	cout << playtime << endl;
}