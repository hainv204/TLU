#include<bits/stdc++.h>
using namespace std;
void xuat(vector<float>v){
	cout<<"\nIn danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
}
int main(){
	vector<float>v;
	float d;
do{
	cout<<"Nhap phan tu: ";cin>>d;
	if(d==0) break;
	v.push_back(d);
}while(true);
xuat(v);
float x;
cout<<"\nCho x = ";cin>>x;
cout<<"Hay them x vao dau va cuoi danh sach:";
v.push_back(x);
v.insert(v.begin(),x);
xuat(v);
cout<<"\nDo dai DS = "<<v.size();
return 0;
}

