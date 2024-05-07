#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0||n>=20);
int a[n];
for(int i=0;i<n;i++){
	cout<<"So thu "<<i+1<<": ";cin>>a[i];
}
cout<<"Dao nguoc day so:";
for(int i=n-1;i>=0;i--){
	cout<<" "<<a[i];
}
int d=0,s=0;
for(int i=0;i<n;i++){
	int b=sqrt(a[i]);
	if(b*b==a[i]){
		d++;
		s+=a[i];
	}
}
cout<<"\nDay co "<<d<<" so chinh phuong.";
cout<<"\nTong cac so chinh phuong S = "<<s;
return 0;
}

