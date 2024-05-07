#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string msv,ten;
	float diem;
};
void sapxep(sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(ds[j].diem>ds[j+1].diem) swap(ds[j],ds[j+1]);
		}
	}
}
void Xuat(sinhvien ds[],int n){
	cout<<"Danh sach Sinh vien:\n";
	for(int i=0;i<n;i++){
		cout<<ds[i].msv<<"\t"<<ds[i].ten<<"\t"<<ds[i].diem<<endl;
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
sapxep(ds,n);
Xuat(ds,n);
return 0;
}

