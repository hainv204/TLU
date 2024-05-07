#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"Cho n = ";cin>>n;
}while(n<5||n>=100);
vector<int>v;
float d;
for(int i=0;i<n;i++){
	cout<<"Nhap phan tu "<<i+1<<": ";cin>>d;
	v.push_back(d);
}
int x;
cout<<"Cho x = ";cin>>x;
cout<<"Hay them x vao dau danh sach!\n";
v.insert(v.begin(),x);
cout<<"In danh sach:";
int s=0;
for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
	if(v[i]%2==0) s+=v[i];
}
cout<<"\nTong cac so chan: "<<s;
return 0;
}

