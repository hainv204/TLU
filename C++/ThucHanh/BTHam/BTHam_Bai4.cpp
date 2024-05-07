#include<cmath>
#include<iostream>
using namespace std;
//Ham nhap mang
void NhapMang(int b[],int n) {
	cout<<"Nhap cac phan tu cua mang A:\n";
	for(int i=0; i<n; i++) {
		cout<<"A["<<i+1<<"]"<<"= ";
		cin>>b[i];
	}
}
//Ham xuat mang
void XuatMang(int b[],int n) {
	cout<<"Day cac phan tu vua nhap: ";
	for (int i=0; i<n; i++) {
		cout<<b[i]<<" ";
	}
}
//Ham kiem tra so nguyen to
int Prime(int n) {
	if(n<=1) return 0;
	for (int i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}
void DSPrime(int b[],int n) {
	cout<<"\nCac so nguyen to trong mang: ";
	for(int i=0; i<n; i++) {
		if(Prime(b[i])) {
			cout<<b[i]<<" ";
		}
	}
}
int main() {
	int n;
	do {
		cout<<"Nhap N= ";
		cin>>n;
	} while(n<=0);
	int b[n];
	NhapMang(b,n);
	XuatMang(b,n);
	DSPrime(b,n);
	return 0;
}

