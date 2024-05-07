#include<bits/stdc++.h>
using namespace std;
int main(){
string w,s;
cout<<"Nhap W = ";getline(cin,w);
for(int i=0;i<w.size();i++){
	if(!isdigit(w[i])) s+=w[i];
}
cout<<"W sau khi xoa cac chu so = "<<s;
return 0;
}

