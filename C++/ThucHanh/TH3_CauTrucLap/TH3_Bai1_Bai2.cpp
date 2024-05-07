/*
Input: 2 so nguyen m,n
Output:-In ra man day theo tang dan va giam dan
	   -Tong S tu M den N
Y tuong:ta sd vong lap do..while de rang buoc dieu kien cua m,n(m<n),su dung vong lap for de in ra cac so nguyen lien tiep tu M den N theo thu tu tang dan va giam dan cac so nguyen
Bai 2 tuong tu bai 1,chung ta chi can khai bao them s de luu tinh tong day,o vong for sau moi lan lap i chung ta cong don va luu va s */
#include<iostream>
using namespace std;
int main() {
//khai bao m,n voi m,n la cac so nguyen
	int m,n,s=0;
	do {
		cout<<"Nhap hai so nguyen M,N: ";
		cin>>m>>n;
	} while(m>=n);
	cout<<"Day theo thu tu tang dan: ";
	for(int i=m; i<=n; i++) {
		cout<<i<<" ";
		s+=i;
	}
	cout<<"\nTong cac so nguyen lien tiep tu M den N: "<<s<<endl;
	cout<<"Day theo thu tu giam dan: ";
	for(int i=n; i>=m; i--) {
		cout<<i<<" ";
	}
	return 0;
}

