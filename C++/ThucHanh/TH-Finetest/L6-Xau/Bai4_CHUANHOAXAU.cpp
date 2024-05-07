#include<bits/stdc++.h>
using namespace std;
int main() {
	string s,tu;
	cout<<"Nhap W = ";
	getline(cin,s);
	stringstream ss(s);
	vector<string>v;
	while(ss>>tu) {
		v.push_back(tu);
	}
		cout<<"Chuan hoa = ";
		for(int i=0; i<v.size(); i++) {
			cout<<v[i];
			if(i!=v.size()-1) cout<<" ";//kiem tra chi so tu chua phai tu cuoi cung thi in dau cach sau tu do
		}
	return 0;
}

