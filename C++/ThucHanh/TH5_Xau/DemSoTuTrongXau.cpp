#include<bits/stdc++.h>
using namespace std;
int main(){
string s,tu;
cout<<"Nhap xau: ";getline(cin,s);
stringstream ss(s);
vector<string>v;
int d=0;
while(ss>>tu) d++;
cout<<"So luong tu trong xau: "<<d;
return 0;
}

