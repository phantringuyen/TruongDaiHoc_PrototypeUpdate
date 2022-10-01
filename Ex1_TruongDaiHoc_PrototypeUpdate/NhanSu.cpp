#include "NhanSu.h"
NhanSu::NhanSu()
{
	hoten = "\0";
	ngay = 0;
	thang = 0;
	nam = 0;
	maso = "\0";
}
NhanSu::NhanSu(const NhanSu& ns)
{
	hoten = ns.hoten;
	ngay = ns.ngay;
	thang = ns.thang;
	maso = ns.maso;
}
NhanSu::~NhanSu()
{
	hoten.clear();
	hoten = "\0";
	hoten.~basic_string();
	
	ngay = 0;
	thang = 0;
	nam = 0;

	maso.clear();
	maso = "\0";
}

void NhanSu::Nhap()
{
	cout << "Nhap vao ho ten: ";
	cin.ignore();
	getline(cin, hoten);

	cout << " ngay/thang/nam sinh" << endl;
	cout << "Nhap vao ngay: "; cin >> ngay;
	cout << "Nhap vao thang: "; cin >> thang;
	cout << "Nhap vao nam: "; cin >> nam;

	//cin.ignore();
	cout << "Nhap vao ma so: ";
	cin.ignore();
	getline(cin, maso);
}

void NhanSu::Xuat()
{
	cout << "\nHo va Ten: " << hoten;
	cout << "\nNgay/thang/nam sinh: " << ngay << "/" << thang << "/" << nam;
	cout << "\nMa so: " << maso;
}
bool NhanSu::Test_ngay(NhanSu& ns)
{
	int tmp = 0;
	int idx = 0;
	// max 31
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		while (ngay > 31 || ngay < 1)
		{
			cout << "So ngay khong hop le! Nhap lai ngay: ";
			cin >> ngay;
		}
	}
	// max 29 || 28 tuy vao nam
	if (thang == 2)
	{
		while (ngay > 29 || ngay < 1)
		{
			cout << "So ngay khong hop le! Nhap lai ngay: ";
			cin >> ngay;
		}
		while (Test_nam(nam) == false && ngay == 29)
		{
			cout << " Nam " << nam << " la nam khong nhuan co 28 ngay, vui long nhap lai so ngay: ";
			cin >> ngay;
		}

	}
	// max 30
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		while (ngay > 30 || ngay < 1)
		{
			cout << "So ngay khong hop le! Nhap lai ngay: ";
			cin >> ngay;
		}

	}
	return true;
}
bool NhanSu::Test_thang(int& thang)
{
	while (thang < 1 || thang > 12) {
		cout << "So thang khong hop le! Nhap lai thang: ";
		cin >> thang;
	}
	return true;
}
bool NhanSu::Test_nam(int& nam)
{
	while (nam < 1000 || nam > 999999) {
		cout << "So nam khong hop le! Nhap lai nam: ";
		cin >> nam;
	}

	// Trả về true nếu
	// chia hết cho 4 nhưng không chia hết cho 100 
	// hoặc chia hết cho 400
	return (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0));
}