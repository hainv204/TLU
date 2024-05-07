//Y tuong: sd if-else de dat dieu kien va tinh toan ket qua
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	float x;
	cout<<"Nhap x= ";//khai bao so thuc x
	cin>>x;
	if(x>0&&x!=2) {
		float f=(x*x+2*sqrt(x))/(x-2);//Tinh toan F(x) neu nhu thoa man dieu kien
		cout<<"f(x) = "<<f;
	} else {
		cout<<"f(x) = 0";

	}
	return 0;
}

