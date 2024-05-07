#define PI 3.1416 //khai bao hang so PI
#include<math.h>
#include<iostream>
using namespace std;
int main() {
	double r;
	cout<<"r= ";
	cin>>r;
	cout<<"Chu vi hinh tron= "<<(2*PI*r)<<endl;
	cout<<"Dien tich hinh tron= "<<(PI*pow(r,2));
	return 0;
}

