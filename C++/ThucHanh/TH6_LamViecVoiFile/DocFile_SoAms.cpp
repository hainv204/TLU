#include<bits/stdc++.h>
using namespace std;
int main(){
int soAms;
ifstream infile("soAmstrong.txt");
if(infile.is_open()){
cout<<"Cac so Amstrong nho hon 150000 trong file la: "<<endl;
while(!infile.eof()){
	infile>>soAms;
	cout<<soAms<<"\t";
}
infile.close();
}
return 0;
}

