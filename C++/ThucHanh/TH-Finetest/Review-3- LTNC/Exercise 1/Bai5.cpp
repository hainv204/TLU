#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu;
cout<<"Nhap xau S:";getline(cin,s);
if(s.size()==0){
	cout<<"Xau rong!";
}else{
	int d=0;
	stringstream ss(s);
	while(ss>>tu) d++;
	cout<<"So tu cua S: "<<d<<endl;
	int d1=0;
	for(int i=0;i<s.size();i++){
		if(!isalpha(s[i])&&!isdigit(s[i])) d1++;
	}
	cout<<"So ky tu khong la chu cai/chu so: "<<d1<<endl;
	cout<<"Xau S sau khi xoa:";
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])||isdigit(s[i])) cout<<s[i];
	}
}
return 0;
}

