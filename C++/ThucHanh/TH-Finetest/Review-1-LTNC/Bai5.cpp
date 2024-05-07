#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"N = ";cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cout<<"a["<<i<<"] = ";cin>>a[i];
}
int max=a[0],d=0;
for(int i=0;i<n;i++){
	if(max<=a[i]) max=a[i];
}
for(int i=0;i<n;i++){
	if(max==a[i]) d++;
}
cout<<"Gia tri lon nhat cua A: "<<max;
cout<<"\nSo phan tu co gia tri lon nhat: "<<d<<endl;
return 0;
}

