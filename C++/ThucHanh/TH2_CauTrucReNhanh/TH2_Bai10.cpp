/*Y tuong:voi x^3 thi sd ham pow(x,y) de tinh toan,e^x sd exp(x) va can(x-1) su dung sqrt
Dieu kien rang buoc: x>=1*/
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	float x;
	cout<<"Nhap x = ";//khai bao x kieu thuc
	cin>>x;
	if(x>=1) {
		float f=pow(x,3)+sqrt(x-1)+3*exp(x);//khai bao f va gan bieu thuc
		cout<<"f(x) = "<<f;
	} else {
		cout<<"f(x) khong xac dinh!";
	}
	return 0;
}

