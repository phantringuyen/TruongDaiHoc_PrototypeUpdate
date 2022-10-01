#include "Chuyen_Vien.h"

ChuyenVien::ChuyenVien()
{
	hoten = '\0';
	time = 0;
	maso = '\0;';
}
ChuyenVien::~ChuyenVien()
{
	hoten = '\0';
	time = 0;
	maso = '\0;';
	//cout << " =>Chuyen Vien' information has been deleted successfully!" << endl;
}

double ChuyenVien::TinhLuong()
{
	int n = 0;
	for (auto& i : MaDanhSachGD)	if (i[0] == 'T') n++;
	return (4 * time + n) * 18000;
}
bool ChuyenVien::MaDuAnHopLe(string a)
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

void ChuyenVien::Nhap()
{
	cout << "\n -- CHUYEN VIEN --\n";
	NhanSu::Nhap();

	do {
		cout << "Nhap vao so nam kinh nghiem: "; cin >> time;
		if (time < 1) cout << "So nam kinh nghiem khong hop le!" << endl;
	} while (time < 1);

	int n;
	do {
		cout << "Nhap vao so du an cua chuyen vien: ";cin >> n;
		if (n < 0)cout << "So du an khong hop le!" << endl;
	} while (n < 0);

	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		cout << "Nhap ma du an thu " << i + 1 << " : ";
		getline(cin, s);
		if (MaDuAnHopLe(s) == true)
			MaDanhSachGD.push_back(s);
	}

}

void ChuyenVien::Xuat()
{
	cout << "\n-- CHUYEN VIEN --\n";
	NhanSu::Xuat();
	cout << "\nSo nam kinh nghiem: " << time;
	cout << "\nDanh sach cac du an\n";
	int j = 1;
	for (auto& i : MaDanhSachGD)
	{
		cout << " -Du an " << j << " : " << i;
		j++;
	}
}