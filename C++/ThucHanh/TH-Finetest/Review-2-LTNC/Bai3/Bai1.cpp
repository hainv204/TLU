#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0||n>=50);
vector<int>v;
int a[n];
for(int i=0;i<n;i++){
	cout<<"So thu "<<i+1<<": ";cin>>a[i];
	v.push_back(a[i]);
}
int x;
cout<<"Cho x = ";cin>>x;
v.insert(v.begin(),x);
cout<<"Day so:";
for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
}
return 0;
}

