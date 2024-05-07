#include<iostream>
#include<cmath>
using namespace std;
//Ham nhap mang
void NhapMang(float a[],int n) {
	for(int i=0; i<n; i++) {
		cout<<"A["<<i<<"]= ";
		cin>>a[i];
	}
}
//Tinh gia tri da thuc Pn(x)=a0+a1x+a2x^2+..+anx^n
void DaThuc(float a[],int n) {
	float x,s=0;
	cout<<"Nhap x:";
	cin>>x;
	for(int i=0; i<n; i++) {
		s+=a[i]*pow(x,i);
	}
	cout<<"Gia tri da thuc bac "<<n<<":"<<s;
}
int main() {
	int n;
	cout<<"Nhap n+1 phan tu:";
	cin>>n;
	float a[n];
	NhapMang(a,n);
	DaThuc(a,n);
	return 0;
}

