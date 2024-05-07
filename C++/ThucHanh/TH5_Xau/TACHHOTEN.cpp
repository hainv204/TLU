#include<bits/stdc++.h>
using namespace std;
int main() {
	string ht;
	cout<<"Nhap ho ten: ";
	getline(cin,ht);
	int dem;
//Kiem tra de lay ten
	for(int i=ht.size()-1; i>=0; i--) {
		if(isspace(ht[i])) {
			dem=i;
			break;
		}
	}
	int pos=ht.find(" ");
	string ho =ht.substr(0,pos);
	string ten=ht.substr(dem+1,ht.size()-1);
	cout<<"Ho: "<<ho;
	cout<<"\nTen: "<<ten;
	return 0;
}

