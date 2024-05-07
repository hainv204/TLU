#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0||n>=20);
int a[n];
for(int i=0;i<n;i++){
	cout<<"So thu "<<i+1<<": ";cin>>a[i];
}
cout<<"In day so:";
for(int i=0;i<n;i++){
	cout<<" "<<a[i];
}
int maxcp=a[0];
for(int i=0;i<n;i++){
	int b=sqrt(a[i]);
	if((b*b==a[i])&&(maxcp<=a[i])) maxcp=a[i];
}
cout<<"\nSo chinh phuong lon nhat: "<<maxcp;
return 0;
}

