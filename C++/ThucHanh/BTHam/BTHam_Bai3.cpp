#include<cmath>
#include<iostream>
using namespace std;
//1.Doi cho 2 so nguyen
void HoanVi2So(int &a,int &b) {
	int tmp=a;
	a=b;
	b=tmp;
}
//2.Tim UCLN
int UCLN(int a,int b) {
	if(b==0) return a;
	return UCLN(b,a%b);
}
//3.Tim BCNN
int BCNN(int a,int b) {
	int result=UCLN(a,b);
	return (a*b)/result;
}
/*4.Ham tra ve kq bieu thuc S
S=1*x + 2*x + 3*x +...+ x*x=x*(1+2+3+...+x).De don gian hoa do phuc tap tu O(n) khi duyet for ta dua ve CTTQ=[x^2(x+1)]/2=>Do phuc tap O(1)*/
int TongS(int n) {
	int s=0;
	return s=(pow(n,3)+pow(n,2))/2;
}
int main() {
//a,b.Nhap vao 2 so nguyen duong a,b va doi cho hai so nguyen duong a,b.Xuat ra man doi so 2 cho
	int a,b;
	do {
		cout<<"Nhap hai so nguyen duong a,b: ";
		cin>>a>>b;
	} while(a<=0||b<=0);
	HoanVi2So(a,b);
	cout<<"Hai so sau khi doi cho: "<<a<<" "<<b;
//c.UCLN cua hai so a,b
	cout<<"\nUSCLN cua 2 so a,b: "<<UCLN(a,b);
//d.BCNN cua 2 so a,b
	cout<<"\nBSCNN cua 2 so a,b: "<<BCNN(a,b);
//e.Nhap n nguyen duong nho hon 20
	int n;
	do {
		cout<<"\nNhap N= ";
		cin>>n;
	} while(n<=0||n>=20);
//f.Xuat kq bieu thuc S
	cout<<"S= "<<TongS(n);
	return 0;
}

