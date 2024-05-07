#include<bits/stdc++.h>
using namespace std;
void xuat(vector<int>v){
	cout<<"Hien thi danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
}
int main(){
int n;
do{
	cout<<"Cho n = ";cin>>n;
}while(n<20);
vector<int>v;
for(int i=1;i<=n;i++){
	if(i%2==0) v.push_back(i);
}
xuat(v);
int x;
cout<<"\nCho so nguyen x = ";cin>>x;
if(x%2==0){
	cout<<"Them x vao dau danh sach!\n";
	v.insert(v.begin(),x);
	xuat(v);
}else{
	cout<<"Them x vao cuoi danh sach!\n";
	v.push_back(x);
	xuat(v);
}
cout<<endl;
return 0;
}

