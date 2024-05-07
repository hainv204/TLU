/*Xau chua day du cac ki tu in thuong tu a den z duoc goi la xau program.
Kiem tra xem xau nhap vao co phai xau program hay khong
vi du:abcdefghijklmnopqrstuvwxyz->Yes*/
#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu;
cout<<"Nhap xau: ";getline(cin,s);
set<char>se;
//for(char x:s)
// se.insert(x);
 for(int i=0;i<s.size();i++){
 	se.insert(s[i]);
 }
if(se.size()==26) cout<<"YES";
else cout<<"NO";
return 0;
}

