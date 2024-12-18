#include "XeMay.h"

XeMay::XeMay()
{
	this->CongSuatDC = 0;
}

XeMay::XeMay(string HangSX, int NamSX, long long GiaBan, string Color, float CongSuatDC) :PhuongTien(HangSX, NamSX, GiaBan, Color)
{
	this->CongSuatDC = CongSuatDC;
}

void XeMay::SetCSDC(float CongSuatDC)
{
	this->CongSuatDC = CongSuatDC;
}

float XeMay::GetCSDC()
{
	return CongSuatDC;
}

void XeMay::XuatTT()
{
	cout << "Cac thong tin cua xe may la : " << endl;
	XuatTTPT();
	cout << "Cong suat cua xe may la : " << CongSuatDC << " kW" << endl;
}
