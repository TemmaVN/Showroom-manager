#ifndef OTO_H
#define OTO_H
#include"PhuongTien.h"

class Oto:public PhuongTien
{
protected:
	int SoCho;
	string KieuDC;
public:
	Oto();
	Oto(string HangSX, int NamSX, long long GiaBan, string Color, int SoCho, string KieuDC);
	void SetSoCho(int SoCho);
	void SetKieuDC(string KieuDC);
	int GetSoCho();
	string GetKieuDC();
	void XuatTT();
};

#endif // !OTO_H



