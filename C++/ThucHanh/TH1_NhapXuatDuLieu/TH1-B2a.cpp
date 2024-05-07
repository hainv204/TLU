#include<iostream>
#include<math.h>
using namespace std;
int main() {
	//khai bao x,voi x la kieu nguyen
	int x;
	cout<<"x= ";
	cin>>x;
	cout<<"F = "<<(pow(x,5) + 5*pow(x,5.0/3) - 6);//Tinh bieu thuc F
	return 0;
}

