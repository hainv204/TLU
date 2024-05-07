#include<bits/stdc++.h>
using namespace std;
int main(){
string s,s1;
cout<<"Nhap xau S: "; getline(cin,s);
for(int i=s.size()-1;i>=0;i--){
	s1+=s[i];
}
if(s==s1) cout<<"Xau doi xung: "<<s1;
else cout<<"Xau khong doi xung";
return 0;
}



