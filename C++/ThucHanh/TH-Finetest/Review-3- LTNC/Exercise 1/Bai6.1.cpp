#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu,w;
cout<<"Nhap xau S:";getline(cin,s);
cout<<"Xau S sau khi xoa:";
for(int i=0;i<s.size();i++){
	if(isdigit(s[i])||isalpha(s[i])||isspace(s[i])){
	cout<<s[i];
	w+=s[i];
}
}
int d=0;
stringstream ss(w);
while(ss>>tu) d++;
cout<<"\nSo tu cua S:"<<d;
return 0;
}

