#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string msv,ten,ns;
};
void Print(vector<sinhvien>sv){
	cout<<"Hien thi danh sach:\n";
	for(int i=0;i<sv.size();i++){
		cout<<sv[i].msv<<"\t"<<sv[i].ten<<"\t"<<sv[i].ns<<endl;
	}
}
int main(){
vector<sinhvien>sv;
do{
	sinhvien sva;
	cout<<"Nhap MaSV: ";getline(cin,sva.msv);
	if(sva.msv=="") break;
	cout<<"Nhap ten: ";getline(cin,sva.ten);
	cout<<"Nam sinh: ";cin>>sva.ns;cin.ignore();
	sv.push_back(sva);
}while(true);
Print(sv);
sinhvien svx;
cout<<"Cho SV can them vao dau DS:\n";
cout<<"MaSV: ";getline(cin,svx.msv);
cout<<"Ten: ";getline(cin,svx.ten);
cout<<"Nam sinh: ";getline(cin,svx.ns);
sv.insert(sv.begin(),svx);
Print(sv);
return 0;
}

