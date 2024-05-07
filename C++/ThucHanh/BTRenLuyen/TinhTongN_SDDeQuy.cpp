//Tinh tong S=1+2+3+...+n
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int tinhtong(int n) {
	if(n==1) return 1;
	return n+tinhtong(n-1);//de quy
}
int main() {
	int n;
	cout<<"N = ";
	cin>>n;
	int kq=tinhtong(n);
	cout<<"Tong S = "<<kq;
	return 0;
}

