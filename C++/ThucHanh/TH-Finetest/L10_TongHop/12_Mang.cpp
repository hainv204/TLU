#include<bits/stdc++.h>
using namespace std;
void Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
}
void Xuat(int a[],int n){
	cout<<"\nIn day so:";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
int XuatMax(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]) max=a[i];
	}
	return max;
}
int isCp(int a[],int n){
	int maxcp=a[0];
	for(int i=0;i<n;i++){
		int b=sqrt(a[i]);
		if((b*b==a[i])&&(maxcp<=a[i])) maxcp=a[i];
	}
	return maxcp;
}
int main(){
int n;
do{
	cout<<"So phan tu n = ";cin>>n;
}while(n<=0||n>=20);
int a[n];
Nhap(a,n);
Xuat(a,n);
cout<<"\n\nSo max = "<<XuatMax(a,n);
cout<<"\nSo chinh phuong lon nhat: "<<isCp(a,n);
return 0;
}

