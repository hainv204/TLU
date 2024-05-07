#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//Khai bao kieu cau truc Thi sinh
struct ThiSinh{
	int sbd,d,m,y,diem;
	string ten,khoa;
};
//Ham nhap
void NhapMang(ThiSinh dsSV[],int siso){
	for(int i=0;i<siso;i++){
		cout<<"Nhap thi sinh thu "<<i+1<<endl;
		cout<<"Nhap so bao danh:";
		cin>>dsSV[i].sbd;
		cin.ignore();
		cout<<"Nhap ten thi sinh:";
		getline(cin,dsSV[i].ten);
		cout<<"Nhap ngay/thang/nam sinh:";
		cin>>dsSV[i].d>>dsSV[i].m>>dsSV[i].y;
		cin.ignore();
		cout<<"Khoa:";
		getline(cin,dsSV[i].khoa);
		cout<<"Diem thi:";
		cin>>dsSV[i].diem;
		cin.ignore();
	}
}
int main(){

return 0;
}

