//Nhap vao 3 so a,b,c tinh dien tich tam giac.Yeu cau nhap sai thi thong bao nhap lai,dung thi thuc hien tieo chuong trinh
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	double a,b,c,p;//a,b,c la 3 canh cua tam giac&kieu so thuc
	while(true) {
	cout<<"Nhap vao ba canh tam giac a,b,c: ";
	cin>>a>>b>>c;
		if(a<=0 || b<=0 || c<=0||(a+b)<=c||(a+c)<=b||(b+c)<=a) {
			cout<<"Ban nhap sai,moi ban nhap lai!\n";
		} else {
			p=(a+b+c)/2;
			cout<<"Dien tich tam giac S = "<<sqrt(p*(p-a)*(p-b)*(p-c));
		return 0;
		}
	}
}

