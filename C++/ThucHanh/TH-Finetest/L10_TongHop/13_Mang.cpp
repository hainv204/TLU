#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"So thu "<<i+1<<": ";
		cin>>a[i];
	}
}
void xuat(int a[],int n){
	cout<<"\nIn day so:";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int demnto(int a[],int n){
	int d=0;
	for(int i=0;i<n;i++){
		if(isPrime(a[i])) d++;
	}
	return d;
}
float tbc(int a[],int n){
	int s=0,dem=0;
	for(int i=0;i<n;i++){
		s+=a[i];
		dem++;
	}
	return (float)s/dem;
}
void maxmin(int a[],int n){
	int max=a[0],min=a[0];
	for(int i=0;i<n;i++){
		if(max<=a[i]) max=a[i];
		if(min>=a[i]) min=a[i];
	}
	cout<<"\n\nSo max = "<<max<<", so min = "<<min;
}
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0||n>=100);
int a[n];
nhap(a,n);
xuat(a,n);
maxmin(a,n);
cout<<"\nDay co "<<demnto(a,n)<<" so nguyen to.";
cout<<"\nTBC day so: "<<tbc(a,n);
return 0;
}

