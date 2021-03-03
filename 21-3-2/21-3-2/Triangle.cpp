#define _CRT_SECURE_NO_WARNINGS 1
#include "Triangle.h"

void Triangle::Get(float& x, float& y, float& z)
{
	x = a, y = b, z = c;
}

void Triangle::Set()
{
	cin >> a >> b >> c;
}

float Triangle::Perimeter()
{
	return a + b + c;
}

float Triangle::Area()
{
	float q = Perimeter() / 2.0;
	return sqrt(q * (q - a)* (q - b) * (q - c));
}