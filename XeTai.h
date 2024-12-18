#ifndef XETAI_H
#define XETAI_H
#include"PhuongTien.h"

class XeTai
{
protected:
	string QuanLy;
	int TrongTai;
public:
	XeTai();
	XeTai(string HangSX, int NamSX, long long GiaBan, string Color, string QuanLy, int TrongTai);
	void SetTrongTai(int TrongTai);
	void SetQuanLy(string QuanLy);
	string GetQuanLy();
	int GetTrongTai();
	void XuatTT();
};

#endif // !XETAI_H



