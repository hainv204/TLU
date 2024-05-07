#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0||n>=100);
float a[n];
vector<float>v;
for(int i=0;i<n;i++){
	cout<<"A["<<i+1<<"] = ";cin>>a[i];
	v.push_back(a[i]);
}
float x;
cout<<"Cho so x = ";cin>>x;
v.push_back(x);
cout<<"Day so:";
for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
}
sort(v.rbegin(),v.rend());
cout<<"\nDay sap xep:";
for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
}
return 0;
}

