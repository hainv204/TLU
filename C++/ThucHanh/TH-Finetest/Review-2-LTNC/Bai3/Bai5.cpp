#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=4||n>=20);
float a[n];
vector<float>v;
for(int i=0;i<n;i++){
	cout<<"so["<<i+1<<"] = ";cin>>a[i];
	v.push_back(a[i]);
}
float x;
cout<<"Cho so x = ";cin>>x;
v.insert(v.begin()+1,x);
cout<<"Day so:";
for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
}
sort(v.begin(),v.end());
cout<<"\nDay sap xep:";
for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
}
return 0;
}

