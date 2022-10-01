#include "Chuyen_Vien.h"
#include "GiaoVien.h"
#include "NghienCuuVien.h"
#include "NhanSu.h"
#include "TroGiang.h"
#include "ThucTapSinh.h"

int main()
{
	vector<NhanSu*> ns;

	cout << "------UNIVERSITY WORK FORCE MANAGEMENT SYSTEM------";
	cout << "\n\t  /* ----Input---- */";
	cout << "\n\t1.Input Giao Vien";
	cout << "\n\t2.Input Tro Giang";
	cout << "\n\t3.Input Nghien Cuu Vien";
	cout << "\n\t4.Input Chuyen Vien";
	cout << "\n\t5.Input Thuc Tap VIen";

	cout << "\n\t  /* ----Ouput---- */";
	cout << "\n\t6.Show all information of all Nhan Su";
	cout << "\n\t7.Calculate wage of all Nhan Su";
	cout << "\n\t8.The highest wage of Nhan Su";

	cout << "\n\t0.Exit!";
	cout << "\n-------------------------------------------------\n";


	/* ----Input ---- */
	// giao vien
	NhanSu* giaovien = new GiaoVien;
	giaovien->Nhap();
	ns.push_back(giaovien);
	cout << endl;
	system("cls");

	// tro giang
	NhanSu* trogiang = new GiaoVienTG;
	trogiang->Nhap();
	ns.push_back(trogiang);
	cout << endl;
	system("cls");


	// nghien cuu vien
	NhanSu* ncv = new NghienCuuVien;
	ncv->Nhap();
	ns.push_back(ncv);
	cout << endl;
	system("cls");

	// chuyen vien
	NhanSu* cv = new ChuyenVien;
	cv->Nhap();
	ns.push_back(cv);
	cout << endl;
	system("cls");

	// thuc tap sinh
	NhanSu* tts = new ThucTapSinh;
	tts->Nhap();
	ns.push_back(tts);
	cout << endl;
	system("cls");

	/* ----Wage---- */

	double tien_luong = 0;
	int max = 0;
	for (auto& i : ns)
	{
		i->Xuat();
		cout << endl;

		tien_luong += i->TinhLuong();
		if (i->TinhLuong() > max)
			max = i->TinhLuong();
	}
	cout << "\nTong tien luong: " << tien_luong;
	cout << "\nTien luong cao nhat: " << max << endl;

	system("pause");
	system("cls");

	cout << "\n Thank you for using this example\t" << endl;
	cout << "\tHave a nice day !\n";

	return 0;
}