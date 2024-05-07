/*Khi biet toa do 3 diem A,B,C ta co:
-Chu vi tam giac: P=AB+BC+AC
-Dien tich tam giac:S=1/2*|(x2-x1)*(y3-y1)-(x3-x1)*(y2-y1)|
-Cac toa do: A(x1,y1),B(x2,y2),C(x3,y3)
*/
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	int x1,x2,x3,y1,y2,y3,c;
	double AB,BC,AC;
	cout<<"Nhap toa do diem A: ";
	cin>>x1>>y2;
	cout<<"\nNhap toa do diem B: ";
	cin>>x2>>y2;
	cout<<"\nNhap toa do diem C: ";
	cin>>x3>>y3;
	AB=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	BC=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	AC=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	c=(x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
	cout<<"Chu vi tam giac ABC: "<<(AB+BC+AC)<<endl;
	cout<<"Dien tich tam giac ABC: "<<0.5*abs(c);
	return 0;
}

