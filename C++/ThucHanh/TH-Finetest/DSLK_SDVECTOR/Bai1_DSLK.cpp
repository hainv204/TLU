#include<bits/stdc++.h>
using namespace std;
struct Sinhvien{
	string msv,ten;
	float diem;
};
void Print(vector<Sinhvien>sv){
	cout<<"In danh sach:\n";
	for(int i=0;i<sv.size();i++){
		cout<<sv[i].msv<<"\t"<<sv[i].ten<<"\t"<<sv[i].diem<<endl;
	}
}
int main(){
int n;
vector<Sinhvien>sv;
cout<<"Cho so phan tu n = ";cin>>n;cin.ignore();
for(int i=0;i<n;i++){
	Sinhvien svp;
	cout<<"Nhap Ma SV: ";getline(cin,svp.msv);
	cout<<"Nhap ten SV: ";getline(cin,svp.ten);
	cout<<"Diem: ";cin>>svp.diem;cin.ignore();
	sv.push_back(svp);
}
Print(sv);
//Them 1 sv
Sinhvien svx;
cout<<"Cho thong tin 1 SV:\n";
cout<<"MaSV: ";getline(cin,svx.msv);
cout<<"Ten: ";getline(cin,svx.ten);
cout<<"Diem: ";cin>>svx.diem;cin.ignore();
if(sv.size()==0){
sv.insert(sv.begin(),svx);
Print(sv);
}else{
	cout<<"Hay them x vao vi tri thu 2!\n";
	sv.insert(sv.begin()+1,svx);
	Print(sv);
}
return 0;
}

