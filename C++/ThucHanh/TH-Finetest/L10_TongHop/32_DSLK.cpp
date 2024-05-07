#include<bits/stdc++.h>
using namespace std;
void Print(vector<int>a){
	cout<<"In danh sach:";
	for(int i=0;i<a.size();i++){
		cout<<" "<<a[i];
	}
}
int main(){
vector<int>a;
int n;
do{
	cout<<"Cho n = ";cin>>n;
}while(n<5);
int d;
for(int i=0;i<n;i++){
	cout<<"Nhap phan tu: ";cin>>d;a.push_back(d);
}
Print(a);
cout<<"\nHay xoa phan tu o cuoi danh sach!\n";
a.pop_back();
Print(a);
int x;
cout<<"\nCho x = ";cin>>x;
cout<<"Hay them x vao dau danh sach!\n";
a.insert(a.begin(),x);
Print(a);
cout<<"\nIn so chan trong danh sach:";
for(int i=0;i<a.size();i++){
	if(a[i]%2==0) cout<<" "<<a[i];
}
cout<<endl;
return 0;
}

