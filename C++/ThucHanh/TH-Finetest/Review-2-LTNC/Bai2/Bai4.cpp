#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n<3) return 1;
	return fib(n-1)+fib(n-2);
}
int main(){
int n;
cout<<"N = ";cin>>n;
n=abs(n);
cout<<"So Fibonacci thu "<<n<<" la: "<<fib(n);
return 0;
}

