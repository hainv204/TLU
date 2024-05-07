#include<cmath>
#include<iostream>
using namespace std;
//Ham nhap mang
void NhapMang(int a[],int n) {
	for(int i=0; i<n; i++) {
		cout<<"A["<<i+1<<"]= ";
		cin>>a[i];
	}
}
//Ham xuat mang
void XuatMang(int a[],int n) {
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
}
//Tinh tong va tbc day
void SumTBC(int a[],int n) {
	int s=0,d=0;
	for(int i=0; i<n; i++) {
		s+=a[i];
		d++;
	}
	cout<<"\nTong day:"<<s;
	cout<<"\nTBC cac phan tu day:"<<(float)s/d;
}
//Dem cac so chinh phuong cua day
int DemCP(int a[],int n) {
	int d=0,b;
	for(int i=0; i<n; i++) {
		b=sqrt(a[i]);
		if(b*b==a[i]) d++;
	}
	return d;
}
//Dem cac so nguyen to co trong day
int isPrime(int n) {
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
	int n,a[n];
	do {
		cout<<"Nhap so phan tu cua mang:";
		cin>>n;
	} while(n<=2||n>=20);
//Nhap mang
	NhapMang(a,n);
//Xuat mang
	cout<<"Day so vua nhap la:";
//
	XuatMang(a,n);
//Tong va TBC cac phan tu cua day
	SumTBC(a,n);
//Dem cac so chinh phuong
	cout<<"\nCo "<<DemCP(a,n)<<" so chinh phuong trong day";
//Dem cac so nto trong day
	cout<<"\nCac so nguyen to co trong day:";
	for(int i=0; i<n; i++) {
		if(isPrime(a[i])) cout<<" "<<a[i];
	}
	return 0;
}

