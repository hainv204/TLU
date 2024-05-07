#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu;
cout<<"Nhap ho va ten:\n";getline(cin,s);
for(int i=0;i<s.size();i++){
	s[i]=tolower(s[i]);
}
stringstream ss(s);
vector<string>v;
int d=0;
while(ss>>tu){
	tu[0]=toupper(tu[0]);//chuyen cac ki tu dau thanh hoa
	v.push_back(tu);
	d++;
}
cout<<"Chuan hoa:\n";
for(int i=0;i<v.size();i++){
	cout<<v[i];
	if(i!=v.size()-1) cout<<" "; 
}
cout<<"\nSo tu: "<<d;
return 0;
}

