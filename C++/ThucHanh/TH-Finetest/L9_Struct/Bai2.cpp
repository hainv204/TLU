#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string msv,ten;
	float diem;
};
void Xuat(sinhvien ds[],int n){
	cout<<"Danh sach SV:\n";
	for(int i=0;i<n;i++){
		cout<<ds[i].msv<<"\t"<<ds[i].ten<<"\t"<<ds[i].diem<<endl;
		
	}
}
void XuatMax(sinhvien ds[],int n){
	float max=ds[0].diem;
	for(int i=0;i<n;i++){
		if(max<ds[i].diem) max=ds[i].diem;
	}
	cout<<"Cac Sinh vien co diem cao nhat:\n";
	for(int i=0;i<n;i++){
		if(max==ds[i].diem) cout<<ds[i].msv<<"\t"<<ds[i].ten<<"\t"<<ds[i].diem<<endl;
	}
}
int main(){
int n;
do{
	cout<<"Nhap so sinh vien n = ";cin>>n;
}while(n<=0);
cin.ignore();
sinhvien ds[n];
for(int i=0;i<n;i++){
	cout<<"Nhap Ma SV: ";getline(cin,ds[i].msv);
	cout<<"Nhap Ten SV: ";getline(cin,ds[i].ten);
	cout<<"Nhap Diem: ";cin>>ds[i].diem;cin.ignore();
}
Xuat(ds,n);
XuatMax(ds,n);
return 0;
}

