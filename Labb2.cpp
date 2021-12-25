#include <iostream>
#include <windows.h>
#include <cmath> 
#include "func.h"		
using namespace std;

float SumA(int x) {
	double a;
	double PI = 3.14159265358979323846;
	a = cbrt(pow(cos(x), 3) * pow(x, 2) + fabs(10 * x - 6)) + sin(PI / 2);
	return a;
}
float SumB(int z, int y) {
	int b;
	b = sqrt(z / z + fabs(8 * pow(y, 3))) - pow(pow(z, 2) + (z * 10 * y) / pow(z + y, 2) + exp(5), 1 / 5);
	return b;
}
float Ser_Geom(int a, int b) {
	int c;
	c = sqrt(a * b);
	return c;
}
