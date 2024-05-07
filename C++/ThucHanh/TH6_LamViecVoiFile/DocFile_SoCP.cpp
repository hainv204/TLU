#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int socp;
ifstream infile("soCP.txt");
if(infile.is_open()){
	cout<<"Cac so chinh phuong <10000 trong file la: "<<endl;
	while(!infile.eof()){
		infile>>socp;
		cout<<socp<<"\t";
	}
	infile.close();
}
return 0;
}

