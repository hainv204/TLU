#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n;
float x;
cout<<"Nhap n: "; cin>>n;
cout<<"Nhap x: "; cin>>x;
cout<<"A= "<<(pow(x*x+x+1,n)+pow(x*x-x+1,n));
return 0;
}

