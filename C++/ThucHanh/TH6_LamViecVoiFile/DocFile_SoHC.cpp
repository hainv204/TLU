#include<bits/stdc++.h>
using namespace std;
int main(){
int sohc;
ifstream infile("soHC.txt");
if(infile.is_open()){
cout<<"Cac so hoan chinh <100000 trong file la: "<<endl;
while(!infile.eof()){
	infile>>sohc;
	cout<<sohc<<"\t";
}
infile.close();
}
return 0;
}

