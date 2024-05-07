#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	int sbd,ns;
	string ten;
};
void xuat(vector<sinhvien>sv){
	cout<<"Hien thi danh sach:\n";
	for(int i=0;i<sv.size();i++){
		cout<<sv[i].sbd<<"\t"<<sv[i].ten<<"\t"<<sv[i].ns<<endl;
	}
}
int main(){
int n;
vector<sinhvien>sv;
cout<<"Cho n = ";cin>>n;cin.ignore();
for(int i=0;i<n;i++){
	sinhvien svp;
	cout<<"Nhap SBD: ";cin>>svp.sbd;cin.ignore();
	cout<<"Nhap ten: ";getline(cin,svp.ten);
	cout<<"Nam sinh: ";cin>>svp.ns;cin.ignore();
	sv.push_back(svp);
}
xuat(sv);
cout<<"Cho SV can them vao cuoi DS:\n";
	sinhvien svx;
	cout<<"SBD: ";cin>>svx.sbd;cin.ignore();
	cout<<"Ten: ";getline(cin,svx.ten);
	cout<<"Nam sinh: ";cin>>svx.ns;cin.ignore();
	sv.push_back(svx);
xuat(sv);
return 0;
}

