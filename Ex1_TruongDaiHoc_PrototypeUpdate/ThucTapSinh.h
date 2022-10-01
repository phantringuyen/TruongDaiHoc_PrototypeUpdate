#pragma once
#include "NghienCuuVien.h"
// định hướng theo con đường của nghiên cứu viên

// chỉ được tham gia vào dự án nghiên cứu dự bị dành riêng cho thực tập

// -  thông tin riêng -
// thời hạn thực tập = tháng 
// lương = 0.1 * ( tổng số dự án nghiên cứu dự bị * 10000 )
// mã dự án = bắt đầu bằng “R”
class ThucTapSinh : public NghienCuuVien
{
public:
	ThucTapSinh();
	~ThucTapSinh();
	void Nhap();
	void Xuat();
	ThucTapSinh(const ThucTapSinh& tts);
	double TinhLuong();
};