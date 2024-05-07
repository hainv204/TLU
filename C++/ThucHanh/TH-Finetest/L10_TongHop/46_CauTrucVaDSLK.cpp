#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	int sbd;
	string ten;
	float diem;
};
void xuat(vector<sinhvien>sv){
	cout<<"Hien thi danh sach:\n";
	for(int i=0;i<sv.size();i++){
		cout<<sv[i].sbd<<"\t"<<sv[i].ten<<"\t"<<sv[i].diem<<endl;
	}
}
int main(){
int n;
cout<<"Cho n = ";cin>>n;
cin.ignore();
vector<sinhvien>sv;
for(int i=0;i<n;i++){
	sinhvien svp;
	cout<<"Nhap SBD: ";cin>>svp.sbd;cin.ignore();
	cout<<"Nhap ten: ";getline(cin,svp.ten);
	cout<<"Diem: ";cin>>svp.diem;cin.ignore();
	sv.push_back(svp);
}
xuat(sv);
sinhvien svx;
cout<<"Cho SV can them vao cuoi DS:\n";
cout<<"SBD: ";cin>>svx.sbd;cin.ignore();
	cout<<"Ten: ";getline(cin,svx.ten);
	cout<<"Diem: ";cin>>svx.diem;cin.ignore();
	sv.push_back(svx);
	xuat(sv);
return 0;
}

