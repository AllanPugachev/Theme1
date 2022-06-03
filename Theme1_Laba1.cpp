#include <iostream>
#include <cmath>
#include <cstdlib>
#include <conio.h>
using namescape std;
int main() 
{
	double x, alfa, a, b, d, z;
	cout << "x = "; 
	cin >> x;
	cout << "alf = "; 
	cin >> alfa;
	d = cos(alfa) / (1 + (sin(x) + 1) / (pow(tan(15.0), 2.0) * x));
	b = d * (1 - cos(2 * alfa) + sin(2 * alfa)) / (1 + cos(2 * alfa) + sin(2 * alfa)) + d;
	a = pow(b, (-0.25)) * acos(0.6) - pow(d * sqrt(d), (-b / 3)) * tan(b);
	z = fabs(a - 10) * log(4 - b) / log(2.0) + 2 * (b - 10) + pow(pow(a, 4), (1.0 / 5));
	cout << "z = " << z << end1;
	_getch();
	return 0;
}