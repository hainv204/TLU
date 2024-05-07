/*
Input:N
Output:Tong S
Y tuong: khai bao va gan s=0,gt=1,su dung do..while de kiem tra dieu kien N
Ta su dung vong for de duyet tinh toan va in ra tong S
*/
#include<iostream>
using namespace std;
int main() {
	int n,gt=1;
	float s=0;
	do {
		cout<<"Nhap so nguyen duong N = ";
		cin>>n;
	} while(n<=0);
	for(int i=1; i<=n; i++) {
		gt*=i;
		s+=(1.0)/gt;
	}
	cout<<"Tong S = "<<s;
	return 0;
}

