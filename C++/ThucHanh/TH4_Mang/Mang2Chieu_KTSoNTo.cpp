#include<bits/stdc++.h>
#define max 100
using namespace std;
void Nhap(int a[][max],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"A["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void Xuat(int a[][max],int n,int m){
	cout<<"Ma tran vua nhap:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";		
		}
		cout<<endl;
	}
}
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void XuatNto(int a[][max],int n,int m){
	cout<<"\nSo nguyen to trong ma tran: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(isPrime(a[i][j])) cout<<" "<<a[i][j];
		}
	}
}
int DemNto(int a[][max],int n,int m){
	int d=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(isPrime(a[i][j])) d++;
		}
	}
	return d;
}
int main(){
int n,m;
cout<<"Nhap so hang: ";cin>>n;
cout<<"Nhap so cot: ";cin>>m;
int a[n][max];
Nhap(a,n,m);
Xuat(a,n,m);
XuatNto(a,n,m);
cout<<"\nSo luong so nguyen to trong ma tran: "<<DemNto(a,n,m);
return 0;
}

