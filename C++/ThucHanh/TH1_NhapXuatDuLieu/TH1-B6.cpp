#include<cmath>
#include<iostream>
#define PI 3.1416
using namespace std;
int main() {
	int a,b,c;//a,b la 2 canh tam giac;c la goc xen giua tinh theo do
	do {
		cout<<"Nhap canh a= ";
		cin>>a;
		cout<<"Nhap canh b= ";
		cin>>b;
		cout<<"Goc xen giua: ";
		cin>>c;
	} while(a<=0||b<=0||c<=0);
	cout<<"Dien tich tam giac abc: "<<0.5*a*b*sin(c*PI/180);//dien tich tam giac khi cho 2 canh va goc xen giua
	return 0;
}

