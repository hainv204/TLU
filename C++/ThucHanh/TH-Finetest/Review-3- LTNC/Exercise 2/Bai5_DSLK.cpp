#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string ten;
	float diem;
};
int main(){
int n;
do{
	cout<<"Cho N = ";cin>>n;
}while(n<=0||n>=100);
cin.ignore();
vector<sinhvien>v;
for(int i=0;i<n;i++){
	sinhvien svp;
	cout<<"Ho va ten: ";getline(cin,svp.ten);
	do{
	cout<<"Diem: ";cin>>svp.diem;cin.ignore();	
	if(svp.diem>=0&&svp.diem<=10) break;
	cout<<"Nhap lai diem thi!\n";
}while(svp.diem<0||svp.diem>10);
	v.push_back(svp);
}
sinhvien svx;
cout<<"Thong tin sinh vien them vao DS:\n";
cout<<"Ho va Ten: ";getline(cin,svx.ten);
do{
	cout<<"Diem thi: ";cin>>svx.diem;cin.ignore();	
	if(svx.diem>=0&&svx.diem<=10) break;
	cout<<"Nhap lai diem thi!\n";
}while(svx.diem<0||svx.diem>10);
	v.push_back(svx);
cout<<"In lai danh sach:\n";
for(int i=0;i<v.size();i++){
	cout<<v[i].ten<<"\t"<<v[i].diem<<endl;
}
return 0;
}

