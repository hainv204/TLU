#include<bits/stdc++.h>
using namespace std;
#define MAX 5//dung for each phu thuoc vao max boi vi khi nhap no bat minh nhap den gioi han cua no
void Nhap( array<int ,MAX>&a){
//nhap mang
for(int &x:a) cin>>x;	
}
void Xuat( array<int,MAX>&a){
//xuat mang
for(int x:a) cout<<" "<<x;	
}
int main(){
int n;
cout<<"Nhap N = "; cin>>n;
array<int,MAX>a;
Nhap(a);
cout<<"Mang vua nhap:";
Xuat(a);
//Xuat day tang
sort(a.begin(),a.end());
cout<<"\nDay sau khi sap xep tang:";
Xuat(a);
//Sap xep giam
sort(a.rbegin(),a.rend());
cout<<"\nDay sau khi sap xep giam:";
Xuat(a);
return 0;
}

