/*
Input:N
Output:Day uoc so tang dan va TBC
Uoc so: gia su co a,b;neu a chia het cho b thi b la uoc so cua a bao gom ca chinh no
*/
#include<iostream>
using namespace std;
int main() {
	int n,d=0,s=0;
	do {
		cout<<"Nhap so nguyen duong N: ";
		cin>>n;
	} while(n<=0);
	cout<<"Cac uoc so cua N tang dan:";
	for(int i=1; i<=n; i++) {
		if(n%i==0) {
			cout<<i<<" ";
			s+=i;
			d++;
		}
	}
	cout<<"\nTrung binh cong cac uoc so: "<<float(s)/d;
	return 0;
}

