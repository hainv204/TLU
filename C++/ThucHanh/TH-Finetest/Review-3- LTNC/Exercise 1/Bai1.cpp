#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0||n>=10);
string s;
cin.ignore();
vector<string>v;
for(int i=0;i<n;i++){
	cout<<"Ho ten thu "<<i+1<<": ";
	getline(cin,s);
	v.push_back(s);
}
int min=v[0].size();
for(int i=0;i<v.size();i++){
	if(min>=v[i].size()){
		min=v[i].size();
	}
}
cout<<"Ho ten ngan nhat (dau tien):";
for(int i=0;i<v.size();i++){
	if(min==v[i].size()){
		cout<<" "<<v[i];
		break;
	}
}
return 0;
}

