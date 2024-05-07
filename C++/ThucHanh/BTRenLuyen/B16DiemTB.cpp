/*Tinh diem trung binh cua mot sinh vien va xuat ra man hinh voi ba mon toan van anh dtb=(toan+van+anh)/3*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	double t,v,a;
	cout<<"Nhap diem toan: ";
	cin>>t;
	cout<<"Nhap diem van: ";
	cin>>v;
	cout<<"Nhap diem anh: ";
	cin>>a;
	cout<<"Diem Trung Binh: "<<(t+v+a)/3;
	cout<<setprecision(3)<<"\nDiem Trung Binh sau khi lam tron den 2 chu so thap phan: "<<(t+v+a)/3;
	return 0;
}

