#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0||n>=10);
int a[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<"A["<<i<<"]["<<j<<"] = ";
		cin>>a[i][j];
	}
}
int d=0;
cout<<"Ma tran A:\n";
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<" "<<a[i][j];
		if(isPrime(a[i][j])) d++;
	}
cout<<endl;	
}
cout<<"Co "<<d<<" so nguyen to!";
return 0;
}

