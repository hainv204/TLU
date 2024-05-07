#include<cmath>
#include<iostream>
using namespace std;
//sd ham thu vien chinh de khai bao va in ra man hinh
int main(){
	int n,s=0,sd;
	cout<<"Nhap N: "; cin>>n;
	while(n>0){
		sd=n%10;
		n=n/10;
		s+=sd;
	}
	cout<<"Tong cac chu so trong N: "<<s;
	return 0;
}

