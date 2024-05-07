#include<iostream>
using namespace std;
//Ham nhap mang
void NhapMang(float a[],int n) {
	for(int i=0; i<n; i++) {
		cout<<"A["<<i+1<<"]= ";
		cin>>a[i];
	}
}
//Tach mang thanh 2 day con theo x
void TachMang(float a[],int n) {
	float x;
	cout<<"Nhap x:";
	cin>>x;
	cout<<"Day nhung phan tu nho hon x:";
	for(int i=0; i<n; i++) {
		if(a[i]<x) cout<<" "<<a[i];
	}
	cout<<"\nDay nhung phan tu lon hon hoac bang x:";
	for(int i=0; i<n; i++) {
		if(a[i]>=x) cout<<" "<<a[i];
	}
}
int main() {
	int n;
	cout<<"Nhap so phan tu cua mang:";
	cin>>n;
	float a[n];
	NhapMang(a,n);
	TachMang(a,n);
	return 0;
}

