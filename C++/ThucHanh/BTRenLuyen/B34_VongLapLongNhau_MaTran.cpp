#include<iostream>
using namespace std;
int main() {
	int h;
	cout<<"Nhap chieu cao h: ";
	cin>>h;
	for(int i=0; i<h; i++) {
		for(int j=0; j<h; j++) {
			if(j==0||i==h-1||i==j) {
				cout<<"*";
			} else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

