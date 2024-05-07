#include<bits/stdc++.h>
using namespace std;
//1.ham nhap vao mot so x thoa man 0<x<n
void HamNhap(int &x,int n) {
	do {
		cout<<"Nhap x=";
		cin>>x;
	} while(x<=0||x>=n);
}
//2.Ham kiem tra so nguyen to
int Prime(int a) {
	if(a<=1) return 0;
	for (int i=2; i<=sqrt(a); i++) {
		if(a%i==0) {
			return 0;
		}
	}
	return 1;
}
//3.ham kiem tra so chinh phuong
int KTChinhPhuong(int b) {
	cout<<"Cac so chinh phuong nho hon N: ";
	for(int i=1; i<b; i++) {
		int c=sqrt(i);
		if(c*c==i) {
			cout<<i<<" ";
		}
	}
}
//4.Ham kiem tra so hoan chinh
bool SoHoanChinh(int d) {
	int s=0;
	for(int i=1; i<d; i++) {
		if(d%i==0) {
			s+=i;
		}
	}
	if(s==d) return true;
	else return false;
}
//5.Ham kiem tra so Armstrong
int demArm(int e) {
	int tmp=0;
	while(e>0) {
		e/=10;
		tmp++;
	}
	return tmp;
}
bool Armstrong(int e) {
	int demN=demArm(e);
	int sd=0,s=0,cpy_e=e;
	while(e>0) {
		sd=e%10;
		e/=10;
		s+=pow(sd,demN);
	}
	if(s==cpy_e) return true;
	else return false;
}
//6.ham kiem tra so doi xung
int SoDoiXung(int f) { //Viet so dao nguoc->so sanh voi so ban dau
	int dem=0,tam=f,tach_so=0,so_moi=0;
	while(tam!=0) {
		tach_so=tam%10;
		so_moi=so_moi*10+tach_so;
		tam/=10;
	}
	return so_moi==f;
}
int main() {
//a,b.Nhap mot so nguyen duong n nho hon 1 trieu va xuat ra cac so nguyen to nho hon n
	int n,x;
		cout<<"Nhap N = ";
		cin>>n;
		HamNhap(n,1e6);
	HamNhap(x,n);
	cout<<"Cac so nguyen to nho hon N: ";
	for(int i=1; i<n; i++) {
		if(Prime(i)) {
			cout<<i<<" ";
		}
	}
//c,d.Nhap so nguyen duong nho hon 500 va xuat ra tat ca so chinh phuong nho hon n
	int b;
	do {
		cout<<"\nNhap N = ";
		cin>>b;
	} while(b<=0||b>=500);
	KTChinhPhuong(b);
//e,f.Nhap vao so nguyen duong nho hon 7000 va xuat cac so hoan chinh nho hon n
	int d;
	do {
		cout<<"\nNhap N = ";
		cin>>d;
	} while(d<=0||d>=7000);
	cout<<"Cac so hoan chinh nho hon N: ";
	for(int i=1; i<d; i++) {
		if(SoHoanChinh(i)) {
			cout<<i<<" ";
		}
	}
//g.Xuat ra cac so Armstrong <100000
	cout<<"\nCac so Armstrong <100000: ";
	for(int i=1; i<1e5; i++) {
		if(Armstrong(i)) {
			cout<<i<<" ";
		}
	}
//h.Xuat ra cac so doi xung <1000000
	cout<<"\nCac so doi xung <1000000: ";
	for(int i=10; i<1e6; i++) {
		if(SoDoiXung(i)) cout<<i<<" ";
	}
	return 0;
}

