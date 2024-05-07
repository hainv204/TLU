#include<cmath>
#include<iostream>
using namespace std;
int main() {
	int n,b;
	do {
		cout<<"Nhap so nguyen duong N: ";
		cin>>n;
	} while(n<=0);
	cout<<"Cac so chinh phuong tu N den 3N:";
	for(int i=n; i<=3*n; i++) {
		b=sqrt(i);
		if(b*b==i) {
			cout<<i<<"    ";
		}
	}
	return 0;
}

