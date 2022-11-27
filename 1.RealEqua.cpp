#include <iostream>
#include <cmath>
using namespace std;
void RealEqua(double a, double b, double& x)
{

	if (a != 0)
	{
		double(x) = -b / a;;
		cout << "co nghiem la: x = " << x;
	}
	else if (b == 0)
		cout << "co vo so nghiem.";
	else
		cout << "vo nghiem.";
}