#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string msv,ten;
	float diem;
};
void xuat(vector<sinhvien>sv){
	cout<<"In danh sach:\n";
	for(int i=0;i<sv.size();i++){
		cout<<sv[i].msv<<"\t"<<sv[i].ten<<"\t"<<sv[i].diem<<endl;
	}
}
int main(){
int n;
cout<<"Cho so phan tu n = ";cin>>n;
cin.ignore();
vector<sinhvien>sv;
for(int i=0;i<n;i++){
	sinhvien svp;
	cout<<"Nhap Ma SV: ";getline(cin,svp.msv);
	cout<<"Nhap ten SV: ";getline(cin,svp.ten);
	cout<<"Diem: ";cin>>svp.diem;cin.ignore();
	sv.push_back(svp);
}
xuat(sv);
sinhvien svx;
cout<<"Cho thong tin 1 SV:\n";
	cout<<"MaSV: ";getline(cin,svx.msv);
	cout<<"Ten: ";getline(cin,svx.ten);
	cout<<"Diem: ";cin>>svx.diem;cin.ignore();
if(sv.size()==0){
	sv.insert(sv.begin(),svx);
	xuat(sv);
}else{
	sv.insert(sv.begin()+1,svx);
	xuat(sv);
}
return 0;
}

