/*
Input:N
Output:Tong,TBC cac so nguyen to
Y tuong:Tao ham kiem tra so nguyen to Prime cac buoc kiem tra minh hoa bang doan code duoi
Su dung do...while de kiem tra dieu kien N,ban dau gan s=0,d=0,sau do muon in ra cac so nguyen to
trong khoang tu 1 den N ta chi can sd vong for va dieu kien if kiem tra ham Prime,dung se in ra day cac so nguyen to
Tu do luu va tinh dc tong va TBC
*/
#include<iostream>
#include<cmath>
using namespace std;
int Prime(int n) {
	if (n <= 1) {
		return 0;
	}
	for (int i = 2; i<= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
//s: tong cac so nguyen to;d: dem cac so nguyen to
	int n,s=0,d=0;
	do {
		cout<<"Nhap so nguyen duong N = ";
		cin>>n;
	} while(n<=0);
	cout<<"Cac so nguyen to khoang tu 1 den N:";
	for(int i=1; i<=n; i++) {
		if(Prime(i)) {
			cout<<i<<"	";
			s+=i;
			d++;
		}
	}
	cout<<"\nTong cac so nguyen to trong khoang tu 1 den N: "<<s;
	cout<<"\nTBC cac so nguyen to trong khoang tu 1 den N: "<<(float)s/d;
	return 0;
}

