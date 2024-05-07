#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu;
cout<<"Nhap xau S:";getline(cin,s);
stringstream ss(s);
int d=0;
while(ss>>tu){
	d++;
}
cout<<"So tu cua S:"<<d<<endl;
cout<<"Xau S sau khi xoa:";
for(int i=0;i<s.size();i++){
	if(!isdigit(s[i])) cout<<s[i];
}
return 0;
}

