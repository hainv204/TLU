#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cout<<"Nhap a = "; cin>>a;
cout<<"Nhap b = "; cin>>b;
cout<<"Nhap c = "; cin>>c;
if(b>c){
	cout<<"Y = 0";
}else{
	cout<<"Y = "<<(a*a+3*a-1);
}
return 0;
}

