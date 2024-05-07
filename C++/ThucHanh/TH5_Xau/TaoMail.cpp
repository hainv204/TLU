/*
Input:nguyeN Van   HaI
Output: hainv@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cout<<"Nhap so luong: ";cin>>n;cin.ignore();
while(n--){
	string s;
	cout<<"Nhap ten nguoi dung: ";getline(cin,s);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	vector<string>v;
	stringstream ss(s);
	string tu;
	while(ss>>tu) v.push_back(tu);
	cout<<"Email: ";
	cout<<v.back();//duoc ten
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i][0];//in ra duoc nv
	}
	cout<<"@gmail.com"<<endl;
}
return 0;
}

