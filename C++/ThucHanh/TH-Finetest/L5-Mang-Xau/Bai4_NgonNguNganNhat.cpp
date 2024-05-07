#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,min=1000000;
	string w,s;
	cout<<"N = ";cin>>n;cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"Ten ngon ngu lap trinh thu "<<i+1<<": ";
		cin>>s;
		if(min>=s.size()){
			min=s.size();
			w=s;
		}
	}
	cout<<"Ngon ngu ngan nhat cuoi cung la: "<<w;
}
