#include<bits/stdc++.h>
using namespace std;
void xuat(vector<float>v){
	cout<<"Hien thi danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
}
int main(){
int n;
do{
	cout<<"Cho n = ";cin>>n;
}while(n<5||n>100);
vector<float>v;
float d;
for(int i=0;i<n;i++){
	cout<<"Nhap phan tu thu "<<i+1<<": ";cin>>d;
	v.push_back(d);
}
xuat(v);
cout<<"\nHay xoa phan tu o dau va cuoi danh sach!\n";
v.pop_back();
v.erase(v.begin());
xuat(v);
float x;
cout<<"\nCho x = ";cin>>x;
cout<<"\nHay them x vao dau va cuoi danh sach!\n";
v.push_back(x);
v.insert(v.begin(),x);
float s=0;
cout<<"Hien thi danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
		s+=v[i];
	}
cout<<"\nTong cac phan tu: "<<s;
return 0;
}

