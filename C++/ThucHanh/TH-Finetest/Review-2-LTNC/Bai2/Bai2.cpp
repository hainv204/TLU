#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n==1) return 0;
	if(n==2||n==3) return 1;
	return fib(n-1)+fib(n-2);
}
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0||n>=20);
cout<<"So Fibonacci thu "<<n<<" la: "<<fib(n);
return 0;
}

