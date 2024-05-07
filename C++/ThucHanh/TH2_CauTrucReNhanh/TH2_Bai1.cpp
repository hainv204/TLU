#include<cmath>
#include<iostream>
using namespace std;
int main() {
//khai bao so thuc x
	float x;
	cout<<"Nhap x: ";
	cin>>x;
	if(x>0) {
		cout<<"f= "<<((x*x+1)/(sqrt(x)-2));//Tinh toan bieu thuc f
	} else {
		cout<<"Bieu thuc khong xac dinnh!";
	}
	return 0;
}

