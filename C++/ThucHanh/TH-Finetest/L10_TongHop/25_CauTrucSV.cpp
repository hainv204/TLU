#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten;
	float diem;
};
void Nhap(SinhVien sv[],int n){
cin.ignore();
for(int i=0;i<n;i++){
	cout<<"Nhap Ma SV: ";getline(cin,sv[i].msv);
	cout<<"Nhap Ten SV: ";getline(cin,sv[i].ten);
	cout<<"Nhap Diem: ";cin>>sv[i].diem;cin.ignore();
}	
}
void Xuat(SinhVien sv[],int n){
	cout<<"Danh sach SV:\n";
for(int i=0;i<n;i++){
	cout<<sv[i].msv<<"\t"<<sv[i].ten<<"\t"<<sv[i].diem<<endl;
}

}
void XuatMax(SinhVien sv[],int n){
cout<<"Cac Sinh vien co diem cao nhat:\n";
float max=sv[0].diem;
for(int i=0;i<n;i++){
	if(max<sv[i].diem) max=sv[i].diem;
}
for(int i=0;i<n;i++){
	if(max==sv[i].diem) cout<<sv[i].msv<<"\t"<<sv[i].ten<<"\t"<<sv[i].diem<<endl;
}	
}
int main(){
int n;
do{
	cout<<"Nhap so sinh vien n = ";cin>>n;
}while(n<=0);
SinhVien sv[n];
Nhap(sv,n);
Xuat(sv,n);
XuatMax(sv,n);
return 0;
}

