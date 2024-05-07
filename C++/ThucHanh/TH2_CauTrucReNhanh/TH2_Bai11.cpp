//Y tuong: sd lenh re nhanh if-else de dat dieu kien va tinh toan
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	float x;
	cout<<"Nhap x = ";//khai bao x kieu thuc
	cin>>x;
	if(x>=0&&x!=3) {//dat dieu kien va tinh toan
		float f=(2*pow(x,2)+1+sqrt(x))/(x-3);//khai bao bieu thuc f va gan bieu thuc
		cout<<"f(x) = "<<f;
	} else {
		cout<<"f(x) = 0";
	}
	return 0;
}

