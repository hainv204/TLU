#include<bits/stdc++.h>
using namespace std;
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
	cout<<"Nhap n = ";cin>>n;
}while(n<=0||n>=100);
int a[n];
vector<int>v;
for(int i=0;i<n;i++){
	cout<<"So thu "<<i+1<<": ";cin>>a[i];
	v.push_back(a[i]);
}
int x;
cout<<"x = ";cin>>x;
v.push_back(x);
int d=0;
cout<<"In day so:";
for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
	if(isPrime(v[i])) d++;
}
cout<<"\nDay co "<<d<<" so nguyen to.";
return 0;
}

