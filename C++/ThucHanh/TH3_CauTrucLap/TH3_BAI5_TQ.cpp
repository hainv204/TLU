/*
Input:N
Output:giai thua,giai thua le,giai thua chan
Cac cau a,b,c su dung vong lap do..while de kiem tra dieu kien cua N va dung vong for de lap va in ra cac giai thua N
*/
#include<iostream>
using namespace std;
int main() {
//a.Tinh n!
	int n,gt=1;
	do {
		cout<<"Nhap N = ";
		cin>>n;
	} while(n<0);
	if(n==0) {
		gt=1;
	} else {
		for(int i=1; i<=n; i++) {
			gt*=i;
		}
	}
	cout<<n<<"!= "<<gt;
//b.gt le
	int a,gtl=1;
	do {
		cout<<endl<<"Nhap N = ";
		cin>>a;
	} while(a<0);
	for(int i=0; i<=a; i++) {
		gtl*=(2*i+1);
	}
	cout<<"Giai thua le: "<<gtl<<endl;
//c.gt chan
	int b,gtc=1;
	do {
		cout<<"Nhap N = ";
		cin>>b;
	} while(b<=0);
	for(int i=1; i<=b; i++) {
		gtc*=(2*i);
	}
	cout<<"Giai thua chan: "<<gtc;
	return 0;
}
