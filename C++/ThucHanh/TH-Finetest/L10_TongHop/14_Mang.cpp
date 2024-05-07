#include<bits/stdc++.h>
using namespace std;
void Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
}
void Xuat(int a[],int n){
	cout<<"\nDay so:";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<endl;
}
void Xuat2(int a[],int n){
	int d=0;
	cout<<"\nIn so chan:";
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<" "<<a[i];
			d++;
		}
	}
	cout<<"\nDay co "<<d<<" so chan!";
}
void XuatCp(int a[],int n){
	int d1=0;
	cout<<"\nIn so chinh phuong:";
	for(int i=0;i<n;i++){
		int b=sqrt(a[i]);
		if(b*b==a[i]){
			cout<<" "<<a[i];
			d1++;
		}
	}
	cout<<"\nDay co "<<d1<<" so chinh phuong!";
}
int main(){
int n;
do{
cout<<"Nhap n = ";cin>>n;	
}while(n<=4||n>=20);
int a[n];
Nhap(a,n);
Xuat(a,n);
Xuat2(a,n);
XuatCp(a,n);
return 0;
}

