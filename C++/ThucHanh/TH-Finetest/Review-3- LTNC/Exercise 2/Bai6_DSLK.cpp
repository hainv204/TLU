#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string msv,ten;
	int ns;
};
void xuat(vector<sinhvien>v){
	cout<<"Hien thi danh sach:\n";
	for(int i=0;i<v.size();i++){
		cout<<v[i].msv<<"\t"<<v[i].ten<<"\t"<<v[i].ns<<endl;
	}
}
int main(){
vector<sinhvien>v;
do{
	sinhvien svp;
	cout<<"Nhap MaSV: ";getline(cin,svp.msv);
	if(svp.msv=="") break;
	cout<<"Nhap ten: ";getline(cin,svp.ten);
	cout<<"Nam sinh: ";cin>>svp.ns;cin.ignore();
	v.push_back(svp);
}while(true);
xuat(v);
cout<<"Cho SV can them vao dau DS:\n";
sinhvien svx;
cout<<"MaSV: ";getline(cin,svx.msv);
cout<<"Ten: ";getline(cin,svx.ten);
cout<<"Nam sinh: ";cin>>svx.ns;cin.ignore();
v.insert(v.begin(),svx);
xuat(v);
return 0;
}

