#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ucln(int a,int b){
	if(b==0) return a;
	return ucln(b,a%b);
}
int BCNN(int a,int b){
	return (a*b)/ucln(a,b);
}
int main(){
	int a,b;
	cout<<"Nhap 2 so nguyen a,b: "; cin>>a>>b;
	cout<<"UCLN =  "<<ucln(a,b)<<endl;
	cout<<"BCNN = "<<BCNN(a,b);
return 0;
}

