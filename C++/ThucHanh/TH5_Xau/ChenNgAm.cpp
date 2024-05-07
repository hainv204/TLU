/*Chen dau '-' vao giua 2 nguyen am trong xau biet cac nguyen am la U,E,O,A,I*/
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"Nhap xau: ";getline(cin,s);
for(int i=0;i<s.size();i++){
	if((s[i]=='U'||s[i]=='E'||s[i]=='O'||s[i]=='A'||s[i]=='I')&&(s[i+1]=='U'||s[i+1]=='E'||s[i+1]=='O'||s[i+1]=='A'||s[i+1]=='I'))
	s.insert(i+1,"-");
}
cout<<"Xau sau khi chen: "<<s;
return 0;
}

