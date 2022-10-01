#include "ThucTapSinh.h"

ThucTapSinh::ThucTapSinh()
{
	hoten = "";
	ngay = 0;
	thang = 0;
	nam = 0;
	maso = "";
}
ThucTapSinh::~ThucTapSinh()
{
	hoten.clear();
	hoten = "\0";
	hoten.~basic_string();

	ngay = 0;
	thang = 0;
	nam = 0;

	maso.clear();
	maso = "\0";
	maso.~basic_string();
}
ThucTapSinh::ThucTapSinh(const ThucTapSinh& tts)
{
	this->hoten = tts.hoten;
	this->ngay = tts.ngay;
	this->thang = tts.thang;
	this->nam = tts.nam;
	this->maso = tts.maso;
}

double ThucTapSinh::TinhLuong()
{
	int temp = 0;
	for (auto& i : MaDanhSachNC)
		if (i[0] == 'R') 
			temp++;
	return 0.1 * temp * 10000;
}

void ThucTapSinh::Nhap()
{
	cout << "\n-- THUC TAP SINH --\n";
	NhanSu::Nhap();

	int soduan = 0;
	do {
		cout << "Nhap vao so du an: "; cin >> soduan;
		if (soduan < 1) cout << " =>So du an khong hop le!" << endl;
	} while (soduan < 0);

	cin.ignore();
	for (int i = 0; i < soduan; i++) {
		string temp;
		cout << "Nhap du an: "; cin >> temp;
		if (MaDuAnNghienCuuHopLe(temp) == true)
			MaDanhSachNC.push_back(temp);
		else cout << " Ma du an khong hop le !\n";
	}
}

void ThucTapSinh::Xuat()
{
	cout << "\n-- THUC TAP SINH --\n";
	NhanSu::Xuat();
	cout << "\nDanh sach cac du an thuc tap\n";
	int j = 0;
	for (auto& i : MaDanhSachNC)
	{
		cout << " - Du an thuc tap " << j << " : " << i;
		j++;
	}
}