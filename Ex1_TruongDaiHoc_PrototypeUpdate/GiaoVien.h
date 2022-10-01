#pragma once
#include "NhanSu.h"

// thông tin về học hàm, học vị, số năm giảng dạy và
//  danh sách tên tất cả các môn học đang giảng dạy
class GiaoVien : public NhanSu
{
	string HocVi; // học vị
	string HocHam; // học hàm
	int ThamNienGiangDay; // số năm giảng dạy
	vector<string> MonHocGD; // danh sách tên tất cả các môn học đang giảng dạy

public:
	//Default constructor
	GiaoVien();
	//Default destructor
	~GiaoVien();
	//Copy constructor
	GiaoVien(const GiaoVien& gv);
	//tinh luong
	double TinhLuong();

	void Nhap();
	void Xuat();
};