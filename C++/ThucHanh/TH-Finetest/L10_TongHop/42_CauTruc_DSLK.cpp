#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string msv,ten;
	int ns;
};
void xuat(vector<sinhvien>sv){
	cout<<"Hien thi danh sach:\n";
	for(int i=0;i<sv.size();i++){
		cout<<sv[i].msv<<"\t"<<sv[i].ten<<"\t"<<sv[i].ns<<endl;
	}
}
int main(){
vector<sinhvien>sv;
do{
	sinhvien svp;
	cout<<"Nhap MaSV: ";getline(cin,svp.msv);
	if(svp.msv=="") break;
	cout<<"Nhap ten: ";getline(cin,svp.ten);
	cout<<"Nam sinh: ";cin>>svp.ns;cin.ignore();
	sv.push_back(svp);
}while(true);
xuat(sv);
cout<<"Cho SV can them vao dau DS:\n";
sinhvien svx;
cout<<"MaSV: ";getline(cin,svx.msv);
cout<<"Ten: ";getline(cin,svx.ten);
cout<<"Nam sinh: ";cin>>svx.ns;cin.ignore();
sv.insert(sv.begin(),svx);
xuat(sv);
return 0;
}

