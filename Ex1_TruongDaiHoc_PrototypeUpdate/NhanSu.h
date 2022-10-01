#pragma once
#include "PhongQuanLy.h"

class NhanSu
{
protected:
	string hoten;
	int ngay, thang, nam;
	string maso;
public:
	NhanSu();
	//NhanSu(string name, int day, int month, int year, string ms);
	NhanSu(const NhanSu& ns);
	~NhanSu();

	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong() = 0;

	bool Test_ngay(NhanSu& ns);
	bool Test_thang(int& thang);
	bool Test_nam(int& nam);
};