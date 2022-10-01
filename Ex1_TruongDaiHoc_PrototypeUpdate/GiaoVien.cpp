#include "GiaoVien.h"

GiaoVien::GiaoVien()
{
	hoten = "";
	ngay = 0;
	thang = 0;
	nam = 0;
	maso = "";
	HocVi = "";
	HocHam = "";
	ThamNienGiangDay = 0;
}
GiaoVien::~GiaoVien()
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

	HocVi.clear();
	HocVi = "\0";
	HocVi.~basic_string();

	HocHam.clear();
	HocHam = "\0";
	HocHam.~basic_string();

	ThamNienGiangDay = 0;
}
GiaoVien::GiaoVien(const GiaoVien& gv)
{
	this->hoten = gv.hoten;
	this->ngay = gv.ngay;
	this->thang = gv.thang;
	this->nam = gv.nam;
	this->maso = gv.maso;
	this->HocVi = gv.HocVi;
	this->HocHam = gv.HocHam;
	this->ThamNienGiangDay = gv.ThamNienGiangDay;
	this->MonHocGD = gv.MonHocGD;
}
double GiaoVien::TinhLuong()
{
	return (MonHocGD.size() * ThamNienGiangDay * 0.12) * 20000;
}

void GiaoVien::Nhap()
{
	cout << "\n-- GIANG VIEN --\n";
	NhanSu::Nhap();

	cout << "Nhap vao hoc vi: ";
	cin.ignore();
	getline(cin, HocVi);

	cout << "Nhap vao hoc ham: ";
	cin.ignore();
	getline(cin, HocHam);
	do {
		cout << "Nhap vao so nam giang day: ";cin >> ThamNienGiangDay;
		if (ThamNienGiangDay < 1) cout << " =>So nam giang day khong hop le!" << endl;
	} while (ThamNienGiangDay < 1);

	int somon = 0;
	do {
		cout << "Nhap vao so mon hoc dang giang day: "; cin >> somon;
	} while (somon < 1 && cout << "Khong hop le!\n");

	cin.ignore();
	for (int i = 0; i < somon; i++) {
		string s;
		cout << "Ten mon hoc thu " << i + 1 << " : ";
		getline(cin, hoten);
		MonHocGD.push_back(s);
	}
}
void GiaoVien::Xuat()
{
	cout << "\n-- GIANG VIEN --\n";
	NhanSu::Xuat();
	cout << "\nHoc vi: " << HocVi;
	cout << "\nHoc ham: " << HocHam;
	cout << "\nSo nam giang day: " << ThamNienGiangDay;
	cout << "\nMon hoc dang giang day\n";
	int j = 1;
	for (auto& i : MonHocGD)
	{
		cout <<" - Mon thu "<<j <<" : "<< i;
		j++;
	}
}