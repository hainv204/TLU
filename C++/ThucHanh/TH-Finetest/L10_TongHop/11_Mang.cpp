#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Nhap n = ";cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cout<<"So thu "<<i<<": ";cin>>a[i];
}
cout<<"\nDay so:";
for(int i=0;i<n;i++){
	cout<<" "<<a[i];
}
cout<<"\n\nDao nguoc day so:";
for(int i=n-1;i>=0;i--){
	cout<<" "<<a[i];
}
int d=0,d1=0;
for(int i=0;i<n;i++){
	int b=sqrt(a[i]);
	if(a[i]%3==0) d++;
	if(b*b==a[i]) d1++;
}
cout<<"\nDay co "<<d<<" so chia het cho 3.";
cout<<"\nDay co "<<d1<<" so chinh phuong.";
return 0;
}

