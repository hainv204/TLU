#include<math.h>
#include<iostream>
using namespace std;
int main() {
//khai bao x,y la cac so nguyen
	int x,y;
	cout<<"x= ";
	cin>>x;
	cout<<"y= ";
	cin>>y;
	cout<<"G = "<<(x*y-pow(x,2)-x*pow(y,2)-pow(y,3));//Tinh F=xy-xy^2-y^3
	return 0;
}

