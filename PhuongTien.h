#ifndef PHUONGTIEN_H
#define PHUONGTIEN_H
#include"Library.h"

class PhuongTien
{
protected:
	string HangSX;
	int NamSX;
	long long GiaBan;
	string Color;
public:
	PhuongTien();
	PhuongTien(string HangSX, int NamSX, long long GiaBan, string Color);
	void SetHangSX(string HangSX);
	void SetNamSX(int NamSX);
	void SetGiaBan(long long GiaBan);
	void SetColor(string Color);
	string GetHangSX();
	int GetNamSX();
	long long GetGiaBan();
	string GetColor();
	void XuatTTPT();
};


#endif // !PHUONGTIEN_H

