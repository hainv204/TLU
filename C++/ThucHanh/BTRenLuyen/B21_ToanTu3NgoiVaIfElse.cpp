#include<bits/stdc++.h> //thu vien chuan khai bao hau het thu vien trong c/c++
using namespace std;
int main() {
//minh hoa toan tu
	int m=5,q=4,p;
	p=m-- - ++q + 2;/*Ket qua: step 1:++q=>q=5;step 2:5-5+2=2=>p=2;step 3: m--=>m=4*/
	cout<<"m = "<<m<<endl;
	cout<<"q = "<<q<<endl;
	cout<<"p = "<<p<<endl;
//Tim so chinh phuong lon nhat
	int n,maxcp=0,a,b[100];
	do {
		cout<<"Nhap N = ";
		cin>>n;
	} while(n<=0 || n>=100);
	for(int i=1; i<=n; i++) {
		cout<<"So thu "<<i<<" : ";
		cin>>b[i];
	}
	cout<<"Cac so chinh phuong: ";
	for(int i=1; i<=n; i++) {
		a=sqrt(b[i]);
		if(a*a==b[i]) {
			maxcp=(maxcp<b[i])?b[i]:maxcp;
			cout<<b[i]<<" ";
		}
	}
	cout<<endl<<"Max so chinh phuong: "<<maxcp;
	return 0;
}

