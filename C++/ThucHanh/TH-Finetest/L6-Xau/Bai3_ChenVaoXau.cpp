#include<bits/stdc++.h>
using namespace std;
int main(){
	string w,s;
	int p,q;
	cout<<"Nhap W = ";getline(cin,w);
	cout<<"Nhap S = ";getline(cin,s);
	cout<<"P = ";cin>>p;
	cout<<"Q = ";cin>>q;
	if(p>w.size()||q>w.size()) return 0;
	if(p>q){
		w.insert(p,s);
		w.insert(q,s);
	}else{
		w.insert(q,s);
		w.insert(p,s);
	}
	cout<<"Ket qua: "<<w;
}
