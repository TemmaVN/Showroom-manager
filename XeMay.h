#ifndef XEMAY_H
#define XEMAY_H
#include"PhuongTien.h"

class XeMay:public PhuongTien
{
protected:
	float CongSuatDC;
public:
	XeMay();
	XeMay(string HangSX, int NamSX, long long GiaBan, string Color,float CongSuatDC);
	void SetCSDC(float CongSuatDC);
	float GetCSDC();
	void XuatTT();
};

#endif // !XEMAY_H



