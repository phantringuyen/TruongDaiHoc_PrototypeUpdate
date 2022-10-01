#pragma once
#include "NhanSu.h"
// Nghiên cứu viên được cung cấp thông tin về danh sách
// tất cả mã dự án nghiên cứu đang tham gia

// nghiên cứu viên còn có thêm thông tin về
// số năm kinh nghiệm nghiên cứu
class NghienCuuVien : public NhanSu
{
	int time; // số năm kinh nghiệm nghiên cứu
protected:
	vector<string> MaDanhSachNC;
public:
	NghienCuuVien();
	~NghienCuuVien();

	double TinhLuong();
	bool MaDuAnNghienCuuHopLe(string);

	virtual void Nhap();
	virtual void Xuat();
};
