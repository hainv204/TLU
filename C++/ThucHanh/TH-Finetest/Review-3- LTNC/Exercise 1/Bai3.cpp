#include<bits/stdc++.h>
using namespace std;
int main(){
string s,w,tu;
int d=0;
cout<<"Nhap xau S:";getline(cin,s);
stringstream ss(s);
while(ss>>tu){
	d++;
}
cout<<"So tu cua S: "<<d;
cout<<"\nNhap xau W:";getline(cin,w);
if(s.find(w)!=-1)
cout<<"Xau W xuat hien trong S tai vi tri: "<<s.find(w);
else
cout<<"Xau W khong xuat hien trong S!";
return 0;
}

