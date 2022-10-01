#include "NghienCuuVien.h"

NghienCuuVien::NghienCuuVien()
{
	hoten = "";
	ngay = 0;
	thang = 0;
	nam = 0;
	maso = "";
	time = 0;
}
NghienCuuVien::~NghienCuuVien()
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

	time = 0;
}

double NghienCuuVien::TinhLuong()
{
	int temp = 0;
	for (auto& i : MaDanhSachNC)	
		if (i[0] == 'D')
			temp++;
	return (2 * time + temp) * 20000;
}
bool NghienCuuVien::MaDuAnNghienCuuHopLe(string a)
{
	// M01, X92,...
	if (a.size() != 3)
		return false;
	if (a.at(0) < 'A' || a.at(0) > 'Z')
		return false;
	if (a.at(1) < '0' || a.at(1) > '9')
		return false;
	if (a.at(2) < '0' || a.at(2) > '9')
		return false;
	return true;
}

void NghienCuuVien::Nhap()
{
	cout << "\n-- NGHIEN CUU VIEN --\n";
	NhanSu::Nhap();

	do {
		cout << "Nhap vao so nam kinh nghiem: ";cin >> time;
		if (time < 1) cout << " =>So nam kinh nghiem khong hop le!" << endl;
	} while (time < 1);

	int soduan = 0;
	do {
		cout << "Nhap vao so du an: ";cin >> soduan;
		if (soduan < 1) cout << " =>So du an khong hop le!" << endl;
	} while (soduan < 0);

	cin.ignore();
	for (int i = 0; i < soduan; i++) {
		string temp;
		cout << "Nhap du an: ";cin >> temp;
		if (MaDuAnNghienCuuHopLe(temp) == true)
			MaDanhSachNC.push_back(temp);
		else cout << " Ma du an khong hop le !\n";
	}
}

void NghienCuuVien::Xuat()
{
	cout << "\n-- NGHIEN CUU VIEN --\n";
	NhanSu::Xuat();
	cout << "\nSo nam kinh nghiem: " << time;
	cout << "\nDanh sach cac du an nghien cuu: ";
	int j = 1;
	for (auto& i : MaDanhSachNC)
	{
		cout << " - Du an nghien cuu " << j << " : " << i;
		j++;
	}
}