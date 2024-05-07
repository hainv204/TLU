#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n,dem=0;
	cout<<"Nhap mot so nguyen duong N: ";
	cin>>n;
	for(int i=1; i<=n; i++) {
		if(n%i==0) dem++;
	}
	if(dem==2) cout<<n<<" la so nguyen to"; //dem=2 la dem so nguyen to chia het cho 1 va chinh no
	else 	   cout<<n<<" khong phai la so nguyen to";
	return 0;
}

