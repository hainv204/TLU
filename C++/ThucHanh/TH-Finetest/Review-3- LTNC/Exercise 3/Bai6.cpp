#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void xuat(vector<int>v){
	cout<<"Hien thi lai danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
}
int main(){
int n;
do{
	cout<<"Cho n = ";cin>>n;
}while(n<10||n>100);
vector<int>v;
for(int i=0;i<n;i++){
	if(isPrime(i)) v.push_back(i);
}
xuat(v);
int x;
cout<<"\nCho so nguyen x = ";cin>>x;
if(isPrime(x)){
	cout<<"x la so nguyen to. Hay them x vao dau danh sach.\n";
	v.insert(v.begin(),x);
	xuat(v);
}else{
	cout<<"x khong phai la so nguyen to!\n";
	xuat(v);
}
return 0;
}

