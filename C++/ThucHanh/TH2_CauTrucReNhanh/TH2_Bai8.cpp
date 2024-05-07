/*Y tuong: sd cau truc re nhanh if-else de dat dieu kien va tinh toan*/
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	float x;
	cout<<"Nhap x = ";//khai bao so thuc x
	cin>>x;
	if(x>0) {
		cout<<"F(x) = "<<((exp(x)-1)/(sqrt(x)+1));//Tinh bieu thuc F(x)
	} else {
		cout<<"Bieu thuc khong xac dinh!";
	}
	return 0;
}

