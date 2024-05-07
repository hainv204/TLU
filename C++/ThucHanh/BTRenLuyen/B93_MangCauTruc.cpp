#include<bits/stdc++.h>
using namespace std;
//Khai bao cau truc sinh vien
struct SinhVien {
//	char ten[200];
	string ten;
	long long int ma;
	int ngay,thang,nam;
	string lop;
};
void NhapMang(SinhVien dsSV[],int siso) {
	for(int i=0; i<siso; i++) {
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<endl;
		cout<<"Nhap ma sinh vien: ";
		cin>>dsSV[i].ma;
		cin.ignore();//cho phep xoa ki tu dau tien trong bo nho dem
		cout<<"Nhap ten sinh vien: ";
		getline(cin,dsSV[i].ten);
		cout<<"Nhap ngay/thang/nam sinh:";
		cin>>dsSV[i].ngay>>dsSV[i].thang>>dsSV[i].nam;
		cin.ignore();
		cout<<"Lop:";
		getline(cin,dsSV[i].lop);
	}
}
void XuatMang(SinhVien dsSV[],int siso) {
	cout<<"-----------------------DANH SACH SINH VIEN-----------------------"<<endl;
	for(int i=0; i<siso; i++) {
		cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<"\t"<<dsSV[i].ngay<<"-"<<dsSV[i].thang<<"-"<<dsSV[i].nam<<"\t"<<dsSV[i].lop<<endl;
	}
}
int main() {
	int siso;
	cout<<"Nhap si so: ";
	cin>>siso;
	SinhVien dsSV[siso];
	NhapMang(dsSV,siso);
	XuatMang(dsSV,siso);
	return 0;
}

