#include<math.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	double x;
	cout<<"Nhap n= ";
	cin>>n;
	do {
		cout<<"Nhap x= ";
		cin>>x;
	} while(x<=0);
	cout<<"P= "<<(pow(3,n)+5*fabs(x)+log(3*x));//Tinh P=3^n+5|x|+ln(3x) voi n nguyen,x thuc&x>0
	return 0;
}

