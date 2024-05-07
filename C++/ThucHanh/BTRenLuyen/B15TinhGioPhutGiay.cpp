#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int t,hour,minute,second;
	cout<<"Nhap t: ";
	cin>>t;//voi t la thoi gian tinh bang giay
	hour=(t/3600)%24;
	minute=(t%3600)/60;
	second=(t%3600)%60;
	cout<<hour<<":"<<minute<<":"<<second;
	return 0;
}

