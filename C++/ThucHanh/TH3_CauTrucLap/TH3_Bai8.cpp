/*
Input:N
Output:Xuat xem phai so nguyen to hay khong
*/
#include<iostream>
using namespace std;
int main() {
	int n,check=0;
	do {
		cout<<"Nhap so nguyen duong N = ";
		cin>>n;
	} while(n<=0);
	for(int i=1; i<=n; i++) {
		if(n%i==0) {
			check++;
		}
	}
	if(check==2) cout<<n<<" la so nguyen to";
	else cout<<n<<" khong phai la so nguyen to";
	return 0;
}

