#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
public:
	void Set();
	void Get(float& x, float& y, float& z);
	float Perimeter();
	float Area();
private:
	float a, b, c;
};

