#include<bits/stdc++.h>
using namespace std;
void xuat(vector<int>v){
	cout<<"Hien thi lai danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
}
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
int n;
do{
	cout<<"Cho n = ";cin>>n;
}while(n<10||n>100);
vector<int>v;
for(int i=1;i<=n;i++){
	if(isPrime(i)) v.insert(v.begin(),i);
}
xuat(v);
float x;
cout<<"\nCho so nguyen x = ";cin>>x;
if(isPrime(x)){
v.insert(v.begin(),x);
cout<<"x la so nguyen to.Hay them x vao dau danh sach.\n";
xuat(v);
}else{
	cout<<"x khong phai la so nguyen to!\n";
	xuat(v);
}
cout<<endl;
return 0;
}

