#include<bits/stdc++.h>
using namespace std;
struct Sinhvien{
	string msv,ten;
	float diem;
};
void Nhap(Sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap Ma SV: ";getline(cin,ds[i].msv);
		cout<<"Nhap Ten SV: ";getline(cin,ds[i].ten);
		cout<<"Nhap Diem: ";cin>>ds[i].diem;cin.ignore();
	}
}
void Xuat(Sinhvien ds[],int n){
	cout<<"Danh sach SV da nhap:\n";
	for(int i=0;i<n;i++){
		cout<<ds[i].msv<<"\t"<<ds[i].ten<<"\t"<<ds[i].diem<<endl;
	}
}
void XuatKha(Sinhvien ds[],int n){
	cout<<"Cac Sinh vien co Hoc luc Kha:\n";
	for(int i=0;i<n;i++){
		if(ds[i].diem>=2.5&&ds[i].diem<=3.19)
		cout<<ds[i].msv<<"\t"<<ds[i].ten<<"\t"<<ds[i].diem<<endl;
	}
}
void XuatGXS(Sinhvien ds[],int n){
	cout<<"Cac Sinh vien co Hoc luc Gioi/Xuat sac:\n";
	for(int i=0;i<n;i++){
		if((ds[i].diem>=3.2&&ds[i].diem<=3.59)||(ds[i].diem>=3.6&&ds[i].diem<=4.0))
		cout<<ds[i].msv<<"\t"<<ds[i].ten<<"\t"<<ds[i].diem<<endl;
	}
}
int main(){
int n;
do{
	cout<<"Nhap so sinh vien n = ";cin>>n;
}while(n<=0);
cin.ignore();
Sinhvien ds[n];
Nhap(ds,n);
Xuat(ds,n);
XuatKha(ds,n);
XuatGXS(ds,n);
return 0;
}

