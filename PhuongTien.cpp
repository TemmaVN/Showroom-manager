#include "PhuongTien.h"

PhuongTien::PhuongTien()
{
	this->Color = "";
	this->GiaBan = 0;
	this->NamSX = 0;
	this->HangSX = "";
}

PhuongTien::PhuongTien(string HangSX, int NamSX, long long GiaBan, string Color)
{
	this->HangSX = HangSX;
	this->NamSX = NamSX;
	this->GiaBan = GiaBan;
	this->Color = Color;
}

void PhuongTien::SetHangSX(string HangSX)
{
	this->HangSX = HangSX;
}

void PhuongTien::SetGiaBan(long long GiaBan)
{
	this->GiaBan = GiaBan;
}

void PhuongTien::SetColor(string Color)
{
	this->Color = Color;
}

void PhuongTien::SetNamSX(int NamSX)
{
	this->NamSX = NamSX;
}

string PhuongTien::GetHangSX()
{
	return HangSX;
}

long long PhuongTien::GetGiaBan()
{
	return GiaBan;
}

int PhuongTien::GetNamSX()
{
	return NamSX;
}

string PhuongTien::GetColor()
{
	return Color;
}

void PhuongTien::XuatTTPT()
{
	cout << "Cac thong tin cua phuong tien la : " << endl;
	cout << "Hang san xuat la : " << HangSX << endl;
	cout << "Gia ban la : " << GiaBan << endl;
	cout << "Nam san xuat la : " << NamSX << endl;
	cout << "Mau phuong tien la : " << Color << endl;
}
