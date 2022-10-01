#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PhongQuanLy
{
public:
	static vector<PhongQuanLy*> DoiTuongMau; //vector các đối tượng bản mẫu
public:
	//Phương thức nhân bản cài đặt đa hình
	virtual PhongQuanLy* Clone() = 0;
	//Method lấy tên lớp đối tượng tương ứng
	virtual string LayTenDoiTuong() = 0;
	//Method thêm đối tượng bản mẫu vào danh sách bản mẫu (static)
	static void ThemDoiTuongMau(PhongQuanLy* ns)
	{
		if (ns == NULL) return;
		int pos = -1;
		// Tìm đối tượng dựa theo tên
		//Nếu không có tên, vậy đối tượng mẫu chưa được thêm vào
		//Tiến hành thêm vào đối tượng mẫu
		for (int i = 0; i < DoiTuongMau.size(); i++)
		{
			PhongQuanLy* mau = DoiTuongMau[i];
			if (mau->LayTenDoiTuong() == ns->LayTenDoiTuong())
				pos = i;
		}
		if (pos == -1) DoiTuongMau.push_back(ns);
	}
	//Method hỗ trợ tạo đối tượng dựa theo tên (static)
	static PhongQuanLy* TaoDoiTuongTheoTen(string tenNS)
	{
		//Tìm đối tượng dựa theo tên
		//nếu có tên đối tượng thì trả về bản clone
		for (int i = 0; i < DoiTuongMau.size(); i++)
		{
			PhongQuanLy* mau = DoiTuongMau[i];
			if (mau->LayTenDoiTuong() == tenNS)
				return DoiTuongMau[i]->Clone();
		}
		//Nếu tìm không có, trả về NULL;
		cout << " => Khong co ten doi tuong hop le\n";
		return NULL;
	}
	//Method cho phép xóa tất cả đối tượng mẫu (Static)
	static void XoaDoiTuongMau()
	{
		for (int i = 0; i < DoiTuongMau.size(); i++)
		{
			delete DoiTuongMau[i];
		}
	}
	//Nếu delete trong destructor dẫn đến infinite loop do tự xóa chính nó (static)
	virtual ~PhongQuanLy()
	{
		//Xóa các thuộc tính khác ngoài thuộc tính static
	}
};