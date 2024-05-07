#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a,b,c,p;//a,b,c la 3 canh cua tam giac&kieu so thuc
	do {
		cout<<"a= ";
		cin>>a;
		cout<<"b= ";
		cin>>b;
		cout<<"c= ";
		cin>>c;
		cout<<"Ban nhap khong hop le,moi ban nhap lai!\n";
	} while(a<=0 || b<=0 || c<=0 ||(a+b)<=c||(a+c)<=b||(b+c)<=a);//dieu kien tam giac
	p=(a+b+c)/2;//p la chu vi cua nua tam giac
	cout<<"S = "<<sqrt(p*(p-a)*(p-b)*(p-c));//CT herong tinh dien tich tam giac
	return 0;
}

