#include<cmath>
#include<iostream>
using namespace std;
int fib(int n) {
	if(n<3) return 1;//diem dung
	return fib(n-1)+fib(n-2);//CT truy hoi tong quat sd de quy.Tinh day fibo tu fibo(1): 1,1,2,3,5,8,13...
}
int main() {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int kq=fib(n);
	cout<<"Fibonacci("<<n<<")= "<<kq;
	return 0;
}

