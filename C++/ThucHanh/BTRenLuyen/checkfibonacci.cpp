//Nhap n va kiem tra xem n co trong day fibonacci hay khong
#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
	if(n<3) return n;		  //Tong quat tra gia tri n<3 ve 0,1,2
	return fib(n-1)+fib(n-2);// day fibo: 0,1,1,2,3,5,8,13...
}
int main() {
	int n,check=0;
	cout<<"N= ";
	cin>>n;
	for(int i=0; i<=n; i++) {
		if(n==fib(i))
			check++;
	}
	if(check==1) cout<<n<<" la so nam trong fibonacci";
	else cout<<n<<" khong nam trong fibonacci";
	return 0;
}

