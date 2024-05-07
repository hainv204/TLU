/*Ho va ten dem viet hoa chu cai dau va ten tach rieng sau dau ,va viet hoa
Input: nGuyen vAn haI
output:Nguyen Van, Hai
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu;
cout<<"Nhap ho ten: ";getline(cin,s);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
stringstream ss(s);
vector<string>v;
while(ss>>tu){
tu[0]=toupper(tu[0]);
v.push_back(tu);
}
cout<<"Ho ten sau khi chuan hoa:";
for(int i=0;i<v.size()-1;i++){
	cout<<" "<<v[i];
}
cout<<", "<<v.back();
return 0;
}

