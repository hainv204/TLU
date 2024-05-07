#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu;
cout<<"Nhap xau:";getline(cin,s);
if(s.size()==0){
	cout<<"Xau rong!";
}else{
	int d=0;
	stringstream ss(s);
	vector<string>v;
	while(ss>>tu){
		d++;
		v.push_back(tu);
	}
	cout<<"Chuan hoa:";
	for(int i=0;i<v.size();i++){
		cout<<v[i];
		if(i!=v.size()-1) cout<<" ";
	}
	cout<<"\nSo tu:"<<d;
}
return 0;
}

