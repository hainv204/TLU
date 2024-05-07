/*
Input:N
Output:Tong S
Y tuong:su dung do...while kiem tra dieu kien N,for de duyet tung phan tu va tinh toan,sau vong lap in ra ket qua tong s
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	float s=0;
	do {
		cout<<"Nhap so nguyen duong N = ";
		cin>>n;
	} while(n<=0);
	for(int i=1; i<=n; i++) {
		s+=(1.0)/i;
	}
	cout<<"Tong S = "<<s;
	return 0;
}

