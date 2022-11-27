#include <cmath>
#include "2.FracEqua.h"

int FracEqua(int tuso1, int mauso1, int tuso2, int mauso2, int& tusonghiem, int& mausonghiem)
{
	if (tuso1 == 0) //TH he so truoc x = 0
	{
		if (tuso2 != 0) return 0; //Vo nghiem
		else return -1; //Vo so nghiem
	}
	else //TH he so truoc x !=0
	{
		tusonghiem = -(tuso2 * mauso1);
		mausonghiem = tuso1 * mauso2;
		return 1;
	}
}
int GCDFunc(int a, int b)
{
	if (a == b || b == 0) return a;
	else return GCDFunc(b, a % b);
}

void FracSimplifer(int& tusonghiem, int& mausonghiem)
{
	int GCD;
	if (mausonghiem < 0)
	{
		mausonghiem *= -1;
		tusonghiem *= -1;
	}
	GCD = GCDFunc(abs(tusonghiem), abs(mausonghiem));
	tusonghiem = tusonghiem / GCD;
	mausonghiem = mausonghiem / GCD;
}
void FracConvert(int tuso1, int mauso1, int tuso2, int mauso2, int tuso3, int mauso3, int tuso4, int mauso4, int& tusotg1, int& mausotg1, int& tusotg2, int& mausotg2)
{
	tusotg1 = (tuso1 * mauso3 - mauso1 * tuso3);
	mausotg1 = mauso1 * mauso3;
	tusotg2 = (tuso2 * mauso4 - mauso2 * tuso4);
	mausotg2 = mauso2 * mauso4;
	FracSimplifer(tusotg1, mausotg1);
	FracSimplifer(tusotg2, mausotg2);
	}
