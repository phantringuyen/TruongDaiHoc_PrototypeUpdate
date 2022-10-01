#pragma once
#include "GiaoVien.h"

// thông tin về số môn trợ giảng
class GiaoVienTG : public NhanSu
{
	//thuộc tính riêng của lớp con
	int SoMonTroGiang = 0;
public:

	GiaoVienTG();
	//constructor có nhiều tham số
	//quy định gọi constructor có nhiều tham số ở lớp cha khi gọi thực thi
	//GiaoVienTG(string name, int day, int month, int year, string hocvi, string hocham, int thamniengd, int somontg);
	//copy constructor quy định gọi copy constructor ở lớp cha khi thực thi
	//copy trước những cái kế thừa có sẵn, xử lý copy thuộc tính riêng

	void Nhap();
	void Xuat();

	//GiaoVienTG(const GiaoVienTG& gvtg) ;
	~GiaoVienTG();
	double TinhLuong();
};