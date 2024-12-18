#include "Oto.h"

Oto::Oto()
{
	this->SoCho = 0;
	this->KieuDC = "";
}

Oto::Oto(string HangSX, int NamSX, long long GiaBan, string Color, int SoCho, string KieuDC) :PhuongTien(HangSX, NamSX, GiaBan, Color)
{
	this->SoCho = SoCho;
	this->KieuDC = KieuDC;
}

void Oto::SetSoCho(int SoCho)
{
	this->SoCho = SoCho;
}

void Oto::SetKieuDC(string KieuDC)
{
	this->KieuDC = KieuDC;
}

int Oto::GetSoCho()
{
	return SoCho;
}

string Oto::GetKieuDC()
{
	return KieuDC;
}

void Oto::XuatTT()
{
	cout << "Cac thong tin cua Oto la " << endl;
	XuatTTPT();
	cout << "Xe co " << SoCho << " cho " << endl;
	cout << "Kieu dong co la : " << KieuDC << endl;
}
