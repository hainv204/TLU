#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int *p=new int[10];
//Nhap mang
cout<<"Nhap vao 10 gia tri nguyen:";
for(int i=0;i<10;i++){
	cin>>p[i];
}
//Tim max,min
int max=p[0],min=p[0];
for(int i=0;i<10;i++){
	if(max<p[i]) max=p[i];
	if(min>p[i]) min=p[i];
}
cout<<"GTLN="<<max;
cout<<"\nGTNN="<<min;
//Sap xep tang
cout<<"\nDay sau khi sap xep tang:";
for(int i=0;i<9;i++){
	for(int j=i+1;j<10;j++){
		if(p[i]>p[j]) swap(p[i],p[j]);
	}
}
for(int i=0;i<10;i++) cout<<" "<<p[i];
//Sap xep giam
cout<<"\nDay sau khi sap xep giam:";
for(int i=0;i<9;i++){
	for(int j=i+1;j<10;j++){
		if(p[i]<p[j]) swap(p[i],p[j]);
	}
}
for(int i=0;i<10;i++) cout<<" "<<p[i];
return 0;
}

