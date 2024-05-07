#include<bits/stdc++.h>
using namespace std;
int main(){
string name,tu;
cout<<"Nhap ten: ";getline(cin,name);
vector<string>v;
stringstream ss(name);
while(ss>>tu){
	v.push_back(tu);
}
cout<<"Ho: "<<v.front()<<endl;
cout<<"Ten: "<<v.back();
return 0;
}

