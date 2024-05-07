#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"Nhap xau S: "; getline(cin,s);
if(s.size()==0)
	cout<<"Xau dau vao rong!";
else{
	cout<<"Xau S: "<<s;
	cout<<"\nDo dai xau S: "<<s.size();
	cout<<"\nDao nguoc xau S: ";
	for(int i=s.size()-1;i>=0;i--){
		cout<<s[i];
	}
}
return 0;
}

