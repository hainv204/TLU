#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
int d;
cout<<"Nhap xau S: ";
getline(cin,s);
for(int i=0;i<s.size();i++){
if(isupper(s[i])){
	d++;
}
}
cout<<"So luong ki tu viet hoa trong xau: "<<d;
return 0;
}

