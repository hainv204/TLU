#include<bits/stdc++.h>
using namespace std;
int main(){
string s,w;
cout<<"Nhap W = ";
getline(cin,w);
s=w+w+w;
cout<<"Cac xau con la:\n";
//for(int i=0;i<3*w.size();i+=3){
//	cout<<s.substr(i,3)<<endl;
//}
for(int i=0;i<s.size();i+=3){
	cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
}
return 0;
}

