#include<bits/stdc++.h>
using namespace std;
int main(){
	int sont;
ifstream infile("soNT.txt");
if(infile.is_open()){
	cout<<"Cac so nguyen to <1000 trong file la: "<<endl;
	while(!infile.eof()){
		infile>>sont;
		cout<<sont<<"\t";
	}
	infile.close();
}
return 0;
}

