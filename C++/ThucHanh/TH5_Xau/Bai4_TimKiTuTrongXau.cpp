#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
char ch;
int d=0;
cout<<"Nhap xau str: ";
getline(cin,str);
cout<<"Nhap ki tu ch: ";
cin.get(ch);//cho phep nhap duoc ki tu dau cach
for(int i=0;i<str.size();i++){
if(str[i]==ch){
	d++;
}
}
if(d!=0)
cout<<"So lan xuat hien ki tu "<<ch<<" trong xau la: "<<d;
else cout<<"Ki tu "<<ch<<" khong xuat hien trong xau";
return 0;
}

