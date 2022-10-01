#pragma once
#include "NhanSu.h"

// chuyên viên phải cung cấp thông tin về danh sách tất cả mã dự án giáo dục đã 
// chuyên viên có thông tin về số năm kinh nghiệm làm việc
class ChuyenVien : public NhanSu
{
	vector<string> MaDanhSachGD;
	int time; // số năm làm việc

public:
	ChuyenVien();
	~ChuyenVien();

	void Nhap();
	void Xuat();

	double TinhLuong();
	bool MaDuAnHopLe(string);
};
