#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
string s;
char w;
cout<<"Nhap xau S: ";getline(cin,s);
cout<<"Nhap xau W: ";cin>>w;cin.ignore();
int pos=s.find(w);
if(s.find(w)==-1) cout<<"W khong xuat hien trong S";
else cout<<"W xuat hien trong S o vi tri "<<pos;
cout<<endl;
getline(cin,s);
return 0;
}

