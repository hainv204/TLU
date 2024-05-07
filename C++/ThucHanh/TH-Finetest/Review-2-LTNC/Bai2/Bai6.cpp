#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n<3) return 1;
	return 2*fib(n-1)+fib(n-2);
}
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
	if(n>5&&n<=20) break;
	cout<<"Moi nhap lai so lieu!\n";
}while(true);
cout<<"So hang thu "<<n<<" la: "<<fib(n);
return 0;
}

