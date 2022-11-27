#include <complex>
#include <cmath>
// Ham giai pt so phuc dang ax +b = 0

void complexEquaType1(double real1, double img1, double real2, double img2,
	double& r1, double& i1,double& r2, double& i2) {

	// Truong hop so phuc dang ax + b=0

	r1 = (((-real1 * real2) - (img1 * img2)) / (pow(real1, 2) + pow(img1, 2)));
	i1 = ((real2 * img1) - (real1 * img2)) / (pow(real1, 2) + pow(img1, 2));

	// Truong hop so phuc dang ax - b=0

	r2 = (((real1 * real2) + (img1 * img2)) / (pow(real1, 2) + pow(img1, 2)));
	i2 = ((-real2 * img1) + (real1 * img2)) / (pow(real1, 2) + pow(img1, 2));
}
//Ham lua chon phep tinh
char pheptinh(char a) {
	char b;
	switch (a)
	{
	case '+':
		b = '+';
	case '-':
		b = '-';
		break;

		return b;
	}
}
//Ham giai pt so phuc dang ax +b = cx + d
void complexEquaType2(double real1, double img1, double real2, double img2,
	double real3, double img3, double real4, double img4
	,double& real_num1,double& img_num1, double& real_num2,
	double& img_num2 ,double& r5, double& i5, double& r6, double& i6) {

	// Truong hop so phuc dang ax + b= Cx + d, Ta dua pt Ax + b =Cx +d ve dang pt Ax+b =0

	//phan thuc va phan ao cua Ax khi cho Ax - Cx
	real_num1 = (real1 - real3);
	img_num1 = (img1 - img3);

	//phan thuc va phan ao cua B khi cho b-d 
	real_num2 = (real2 - real4);
	img_num2 = (img2 - img4);

	//tinh toan
	//Truong hop so phuc dang Ax + b =0

	r5 = (((-real_num1 * real_num2) - (img_num1 * img_num2)) / (pow(real_num1, 2) + pow(img_num1, 2)));
	i5 = ((real_num2 * img_num1) - (real_num1 * img_num2)) / (pow(real_num1, 2) + pow(img_num1, 2));

	// Truong hop so phuc dang Ax - b=0

	r6 = (((real_num1 * real_num2) + (img_num1 * img_num2)) / (pow(real_num1, 2) + pow(img_num1, 2)));
	i6 = ((-real_num2 * img_num1) + (real_num1 * img_num2)) / (pow(real_num1, 2) + pow(img_num1, 2));
}