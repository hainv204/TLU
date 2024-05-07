#include<bits/stdc++.h>
using namespace std;
void xuat(vector<float>v){
	cout<<"\nHien thi danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
}
int main(){
int n;
do{
	cout<<"Cho so phan tu n = ";cin>>n;
}while(n<=4);
float d;
vector<float>v;
for(int i=0;i<n;i++){
cout<<"Nhap phan tu thu "<<i+1<<": ";cin>>d;
	v.push_back(d);
}
xuat(v);
float x;
cout<<"\nCho x = ";cin>>x;
cout<<"Hay them x vao dau va cuoi danh sach.";
v.push_back(x);
v.insert(v.begin(),x);
xuat(v);
cout<<"\nHay xoa o cuoi danh sach:";
v.pop_back();
xuat(v);
cout<<"\nDo dai cua DS = "<<v.size();
return 0;
}

