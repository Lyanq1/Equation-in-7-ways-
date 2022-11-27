#include <iostream>
#include <cmath>
#include "1.RealEqua.h"
#include "2.FracEqua.h"
#include "3.ComplexEqua.h"
using namespace std;
int main()
{
	double a, b, c, d, e, f, g, h, x;
	int tuso1, tuso2, tuso3, tuso4, mauso1, mauso2, mauso3, mauso4, tusotg1, mausotg1, tusotg2, mausotg2, root, tusonghiem=0, mausonghiem=1;
	char dau1,dau2,dau3,dau4;
	int luachon;
	cout << "Hay chon kieu du lieu va dang phuong trinh ban muon giai.\n";
	cout << "1. Dang so thuc va phuong trinh Ax + B = 0.\n"
		<< "2. Dang so thuc va phuong trinh Ax + B = Cx + D.\n"
		<< "3. Dang phan so va phuong trinh Ax + B = 0.\n"
		<< "4. Dang phan so va phuong trinh Ax + B = Cx + D.\n"
		<< "5. Dang so phuc va phuong trinh Ax + B = 0.\n"
		<< "6. Dang so phuc va phuong trinh Ax + B = Cx + D.\n"
		<< " Chon so 0 de dung chuong trinh.\n"
		<< "--------------------------------------------------\n";
	cin >> luachon;
	if (luachon == 0)
		cout << "Ban da thoat chuong trinh";
	else
	{
		switch (luachon)
		{
			//Pt so thuc dang ax+b=0

		case 1:
			cout << "Giai phuong trinh so thuc co dang Ax + B = 0.\n";
			cout << "Nhap he so A:\n";
			cin >> a;
			cout << "Nhap he so B:\n";
			cin >> b;
			if (b >= 0)
				cout << "Phuong trinh " << a << "x" << " + " << b << " = " << 0 << " ";
			else
				cout << "Phuong trinh " << a << "x" << " - " << abs(b) << " = " << 0 << " ";
			RealEqua(a, b, x);
			break;

			//Pt so thuc dang ax+b=cx+d

		case 2:
			cout << "Giai phuong trinh so thuc co dang Ax + B = Cx + D.\n";
			cout << "Nhap he so A:\n";
			cin >> a;
			cout << "Nhap he so B:\n";
			cin >> b;
			cout << "Nhap he so C:\n";
			cin >> c;
			cout << "Nhap he so D:\n";
			cin >> d;
			a = a - c;
			b = b - d;
			if (b >= 0)
				cout << "Phuong trinh " << a << "x" << " +" << b << " = " << 0 << " ";
			else
				cout << "Phuong trinh " << a << "x " << b << " = " << 0 << " ";
			RealEqua(a, b, x);
			break;

		case 3:
			cout << "Giai phuong trinh phan so co dang Ax + B = 0.\n";
			cout << "Nhap tu so cua phan so thu nhat: \n ";
			cin >> tuso1;
			cout << "Nhap mau so cua phan so thu nhat: \n ";
			cin >> mauso1;
			cout << "Nhap tu so cua phan so thu hai: \n ";
			cin >> tuso2;
			cout << "Nhap mau so cua phan so thu hai: \n ";
			cin >> mauso2;
			if ((mauso1 == 0) || (mauso2 == 0))
				cout << "Nhap loi!" << endl;

				root = FracEqua(tuso1, mauso1, tuso2, mauso2, tusonghiem, mausonghiem);
				if (root == 0)
				{
					cout << "Phuong trinh vo nghiem." << endl;
				}
				if (root == -1)
				{
					cout << "Phuong trinh vo so nghiem." << endl;
				}
				if (root == 1)
				{
					FracSimplifer(tusonghiem, mausonghiem);
					if ((tuso2 * mauso2) < 0)
					{
						cout << "Phuong trinh " << "(" << tuso1 << "/" << mauso1 << ")" << "x" << " - " << abs(tuso2) << "/" << abs(mauso2) << " = 0 co nghiem: " << endl << "x = " << tusonghiem << "/" << mausonghiem << endl;
					}
					if ((tuso2 * mauso2) >= 0)
					{
						cout << "Phuong trinh " << "(" << tuso1 << "/" << mauso1 << ")" << "x" << " + " << abs(tuso2) << "/" << abs(mauso2) << " = 0 co nghiem: " << endl << "x = " << tusonghiem << "/" << mausonghiem << endl;
					}
				}
			break;

		case 4:
			cout << "Giai phuong trinh phan so co dang Ax + B = Cx + D.\n";
			cout << "Nhap tu so cua phan so thu nhat: \n ";
			cin >> tuso1;
			cout << "Nhap mau so cua phan so thu nhat: \n ";
			cin >> mauso1;
			cout << "Nhap tu so cua phan so thu hai: \n ";
			cin >> tuso2;
			cout << "Nhap mau so cua phan so thu hai: \n ";
			cin >> mauso2;
			cout << "Nhap tu so cua phan so thu ba: \n ";
			cin >> tuso3;
			cout << "Nhap mau so cua phan so thu ba: \n ";
			cin >> mauso3;
			cout << "Nhap tu so cua phan so thu tu: \n ";
			cin >> tuso4;
			cout << "Nhap mau so cua phan so thu tu: \n ";
			cin >> mauso4;
			if ((mauso1 == 0) || (mauso2 == 0) || (mauso3 == 0) || (mauso4 == 0))
				cout << "Nhap loi!" << endl;
			FracConvert(tuso1, mauso1, tuso2, mauso2, tuso3, mauso3, tuso4, mauso4, tusotg1, mausotg1, tusotg2, mausotg2);
			//Xuat ra phuong trinh moi
			if ((tusotg2 * mausotg2) < 0)
			{
				cout << "Phuong trinh duoc chuyen thanh dang: " << "(" << tusotg1 << "/" << mausotg1 << ")" << "x" << " - " << abs(tusotg2) << "/" << abs(mausotg2) << " = 0" << endl;
			}
			if ((tusotg2 * mausotg2) >= 0)
			{
				cout << "Phuong trinh duoc chuyen thanh dang: " << "(" << tusotg1 << "/" << mausotg1 << ")" << "x" << " + " << abs(tusotg2) << "/" << abs(mausotg2) << " = 0" << endl;
			}
			tuso1 = tusotg1; mauso1 = mausotg1; tuso2 = tusotg2; mauso2 = mausotg2; //Cap nhat he so phuong trinh
			root = FracEqua(tuso1, mauso1, tuso2, mauso2, tusonghiem, mausonghiem);
			if (root == 0)
			{
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else if (root == -1)
			{
				cout << "Phuong trinh vo so nghiem." << endl;
			}
			else if (root == 1)
			{
				FracSimplifer(tusonghiem, mausonghiem);
				if ((tusotg2 * mausotg2) < 0)
				{
					cout << "Phuong trinh " << "(" << tusotg1 << "/" << mausotg1 << ")" << "x" << " - " << abs(tusotg2) << "/" << abs(mausotg2) << " = 0 co nghiem: " << endl << "x = " << tusonghiem << "/" << mausonghiem << endl;
				}
				if ((tusotg2 * mausotg2) >= 0)
				{
					cout << "Phuong trinh " << "(" << tusotg1 << "/" << mausotg1 << ")" << "x" << " + " << abs(tusotg2) << "/" << abs(mausotg2) << " = 0 co nghiem: " << endl << "x = " << tusonghiem << "/" << mausonghiem << endl;
				}
			}
			break;
			
		case 5:
			//Phuong trinh so phuc dang Ax+B=0
			double r1, i1,r2,i2;
			char toanTu, dau1, dau2;
			cout << "Chao mung toi phuong trinh bac nhat cua so phuc dang Ax +b =0 \n"
				<<"Luu y khi nhap phan ao cua cac he so vui long nhap luon dau cua so ma ban chon.\n";
			//Nhap he so A
			cout << "Nhap phan thuc cua he so A:\n";
			cin >> a;
			cout << "Nhap phan ao cua he so A:\n";  
			cin>> b;
			if (b > 0)
				cout << "So phuc A la: " << a << " + " << b << "i" << endl;
			else
				cout << "So phuc A la: " << a << " - " << abs(b) << "i" << endl;

			//lua chon phep tinh
			do {
				cout << "Hay nhap vao toan tu cua phuong trinh (+,-): \n";
				cin >> toanTu;
				if (toanTu != '+' && toanTu != '-')
					cout << "Xin hay nhap chinh xac phep tinh '+' hoac '-'! \n";

			} while (toanTu != '+' && toanTu != '-');
			//Nhap he so B
			cout << "Nhap phan thuc cua he so B:\n";
			cin >> c;
			cout << "Nhap phan ao cua he so B:\n";
			cin >> d;
			if (d > 0)
				cout << "So phuc B la: " << c << " + " << d << "i" << endl;
			else
				cout << "So phuc B la: " << c << " - " << abs(d) << "i" << endl;
			complexEquaType1(a, b, c, d, r1, i1,r2,i2);
			//xuat ra cac gia tri
			/// truong hop b >0 ta se xuat ra so phuc a dang ax + b

			//Truong hop ax - b = 0 va nghiem i <0, ta khong xuat ra dau tru
			if (pheptinh(toanTu) == '-' && i2 < 0 && b >0) {
				cout << "Phuong trinh (" << a << " + " << b << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r2 << " " << i2 << "i";
			}

			//Truong hop ax - b = 0 va nghiem i >0, ta xuat ra dau cong
			if (pheptinh(toanTu) == '-' && i2 > 0 && b > 0) {
				cout << "Phuong trinh (" << a << " + " << b << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r2 << " + " << i2 << "i";
			}

			//Truong hop ax + b = 0 va nghiem i <0, ta khong xuat ra dau tru
			if (pheptinh(toanTu) == '+' && i1 < 0 && b >0) {
				cout << "Phuong trinh (" << a << " + " << b << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r1 << " " << i1 << "i";
			}

			//Truong hop ax + b = 0 va nghiem i >0, ta xuat ra dau cong
			if (pheptinh(toanTu) == '+' && i1 > 0 && b > 0) {
				cout << "Phuong trinh (" << a << " + " << b << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r1 << " + " << i1 << "i";
			}

			/// truong hop b <0 ta se xuat ra so phuc a dang ax - b

			//Truong hop ax - b = 0 va nghiem i <0, ta khong xuat ra dau tru
			if (pheptinh(toanTu) == '-' && i2 < 0 && b < 0) {
				cout << "Phuong trinh (" << a << " - " << abs(b) << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r2 << " " << i2 << "i";
			}

			//Truong hop ax - b = 0 va nghiem i >0, ta xuat ra dau cong
			if (pheptinh(toanTu) == '-' && i2 > 0 && b < 0) {
				cout << "Phuong trinh (" << a << " - " << abs(b) << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r2 << " + " << i2 << "i";
			}

			//Truong hop ax + b = 0 va nghiem i <0, ta khong xuat ra dau tru
			if (pheptinh(toanTu) == '+' && i1 < 0 && b >0) {
				cout << "Phuong trinh (" << a << " - " << abs(b) << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r1 << " " << i1 << "i";
			}

			//Truong hop ax + b = 0 va nghiem i >0, ta xuat ra dau cong
			if (pheptinh(toanTu) == '+' && i1 > 0 && b > 0) {
				cout << "Phuong trinh (" << a << " - " << abs(b) << "i" << ")x " << pheptinh(toanTu) <<
					" (" << c << " + " << d << "i)" << " = 0"
					<< " co 1 nghiem la " << r1 << " + " << i1 << "i";
			}
			break; 
					
		case 6:
			//Phuong trinh so phuc dang Ax + B =Cx + D
			double r3, i3, r4, i4,r5,i5,r6,i6;
			char toantu;
			cout << "Chao mung toi phuong trinh bac nhat cua so phuc dang Ax + B =Cx + D \n"
				<< "Luu y khi nhap phan ao cua cac he so vui long nhap luon dau cua so ma ban chon.\n";
			
			//Nhap vao so phuc A

			cout << "Nhap phan thuc cua he so A:\n";
			cin >> a;
			cout << "Nhap phan ao cua he so A:\n";
			cin >> b;
			if (b > 0)
				cout << "So phuc A la: " << a << " + " << b << "i" << endl;
			else
				cout << "So phuc A la: " << a << " - " << abs(b) << "i" << endl;
			
			//lua chon phep tinh
			do {
				cout << "Hay nhap vao toan tu ban muon (+,-): \n";
				cin >> toantu;
				if (toantu != '+' && toantu != '-')
					cout << "Xin hay nhap chinh xac phep tinh '+' hoac '-'! \n";

			} while (toantu != '+' && toantu != '-');

			//Nhap vao so phuc B

			cout << "Nhap phan thuc cua he so B:\n";
			cin >> c;
			cout << "Nhap phan ao cua he so B:\n";
			cin >> d;
			if (d > 0)
				cout << "So phuc B la: " << c << " + " << d << "i" << endl;
			else
				cout << "So phuc B la: " << c << " - " << abs(d) << "i" << endl;
			//Neu toan tu nhap vao la tru thi gia tri cua c va d se chuyen thanh so am
			if (toantu == '-') {
				c = -c;
				d = -d;
			}
			
			//Nhap vao so phuc C

			cout << "Nhap phan thuc cua he so C:\n";
			cin >> e;
			cout << "Nhap phan ao cua he so C:\n";
			cin >> f;
			if (f > 0)
				cout << "So phuc C la: " << e << " + " << f << "i" << endl;
			else
				cout << "So phuc C la: " << e << " - " << abs(f) << "i" << endl;

			//Nhap vao so phuc D

			cout << "Nhap phan thuc cua he so D:\n";
			cin >> g;
			cout << "Nhap phan ao cua he so D:\n";
			cin >> h;
			if (h > 0)
				cout << "So phuc D la: " << g << " + " << h << "i" << endl;
			else
				cout << "So phuc D la: " << g << " - " << abs(h) << "i" << endl;
			
			//Tinh toan 
			complexEquaType2(a, b, c, d,e,f,g,h,r3,i3,r4,i4,r5, i5, r6, i6);
			cout << "Ta co pt da nhap vao duoi dang ax + b = 0: "<<endl;

			//Truong hop A trong Ax+B=0 co gia tri bang 0
			if (r3 == 0 && i3 == 0) {
				cout << "Pt khong xac dinh!";
			}
			//Truong hop Ax - B = 0 va nghiem i cua ket qua mang gia tri am, ta khong xuat dau tru
			if (r4 < 0 && i6 < 0) {
				cout << "Phuong trinh (" << r3 << " + " << i3 << "i" << ")x " << "+" <<
					" (" << r4 << " + " << i4 << "i)" << " = 0"
					<< " co 1 nghiem la " << -1 * r6 << " - " << abs(-1 * i6) << "i" << endl;
			}
			//Truong hop Ax - B = 0 va nghiem i cua ket qua mang gia tri duong, ta xuat dau cong
			if (r4 < 0 && i6 >0) {
				cout << "Phuong trinh (" << r3 << " + " << i3 << "i" << ")x " << "+" <<
					" (" << r4 << " + " << i4 << "i)" << " = 0"
					<< " co 1 nghiem la " << -1 * r6 << " - " << abs(-1 * i6) << "i";
			}
			//Truong hop Ax + B = 0 va nghiem i cua ket qua mang gia tri am, ta khong xuat dau tru
			if (r4 >= 0 && i5 < 0) {
				cout << "Phuong trinh (" << r3 << " + " << i3 << "i" << ")x " << "+" <<
					" (" << r4 << " + " << i4 << "i)" << " = 0"
					<< " co 1 nghiem la " << r5 << " " << i5 << "i" << endl;
			}
			//Truong hop Ax + B = 0 va nghiem i cua ket qua mang gia tri duong, ta xuat dau cong
			if (r4 >= 0 && i5 > 0) {
				cout << "Phuong trinh (" << r3 << " + " << i3 << "i" << ")x " << "+" <<
					" (" << r4 << " + " << i4 << "i)" << " = 0"
					<< " co 1 nghiem la " << r5 << " + " << i5 << "i";
			}
			break; 
		}
	}
	return 0;
}