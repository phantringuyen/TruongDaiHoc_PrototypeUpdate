#include "TroGiang.h"

GiaoVienTG::GiaoVienTG():NhanSu()
{
	SoMonTroGiang = 0;
}
GiaoVienTG::~GiaoVienTG()
{
	int SoMonTroGiang = 0;
}

double GiaoVienTG::TinhLuong()
{
	return (SoMonTroGiang * 0.3) * 18000;
}

void GiaoVienTG::Nhap()
{
	cout << "\n-- TRO GIANG --\n";
	NhanSu::Nhap();

	do {
		cout << "Nhap vao so mon hoc dang tro giang: ";
		cin >> SoMonTroGiang;
		if (SoMonTroGiang < 0) cout << " =>So mon hoc dang tro giang khong hop le!" << endl;
	} while (SoMonTroGiang < 0);
}

void GiaoVienTG::Xuat()
{
	cout << "\n-- TRO GIANG --\n";
	NhanSu::Xuat();
	cout << "\nSo mon hoc dang tro giang: " << SoMonTroGiang << endl;
}
