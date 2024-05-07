/*
Thuc hien loai bo cac tu trong xau
Input:-dong 1 chua xau khong qua 1000 ki tu
	  -dong 2 chua tu can loai bo khong qua 10 ki tu
Output:thuc hien loai bo tu trong xau
Vi du:
Input:lap   trinh python    java python c lap trinh
Output:lap python java python c lap
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
//s1 la xau cha,s2 la nhap tu can loai bo trong xau
string s1,s2,tu;
cout<<"Nhap xau s1: ";getline(cin,s1);
cout<<"Nhap tu can loai bo: ";cin>>s2;
stringstream ss(s1);
cout<<"Xau sau khi xoa tu "<<s2<<":";
while(ss>>tu){
	if(tu!=s2) cout<<" "<<tu;
}
return 0;
}

