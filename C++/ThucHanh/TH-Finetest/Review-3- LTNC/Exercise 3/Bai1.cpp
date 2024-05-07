#include<bits/stdc++.h>
using namespace std;
void xuat(vector<float>v){
	cout<<"Danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
}
int main(){
int n;
do{
	cout<<"Cho N = ";cin>>n;
}while(n<0||n>=100);
vector<float>v;
float d;
for(int i=0;i<n;i++){
	cout<<"Phan tu thu "<<i+1<<": ";cin>>d;
	v.push_back(d);
}
xuat(v);
float x;
cout<<"\nCho x = ";cin>>x;
if(v.size()==0){
	v.insert(v.begin(),x);
	xuat(v);
}else{
	v.push_back(x);
	xuat(v);
}
return 0;
}

