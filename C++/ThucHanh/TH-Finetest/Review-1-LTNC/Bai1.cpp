#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"N = ";cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cout<<"a["<<i<<"] = ";cin>>a[i];
}
int d=0;
cout<<"Day A =";
for(int i=0;i<n;i++){
	cout<<" "<<a[i];
	if(a[i]<0) d++;
}
cout<<"\nSo so am trong A: "<<d;
return 0;
}

