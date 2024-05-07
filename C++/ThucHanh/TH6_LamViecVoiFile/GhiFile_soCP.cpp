#include<bits/stdc++.h>
using namespace std;
bool checkCP(int n){
	int a=sqrt(n);
	if(a*a==n) return true;
return false;
}
int main(){
ofstream outfile("soCP.txt");
int count=0;
if(outfile.is_open()){
	for(int i=1;i<1e4;i++){
		if(checkCP(i)){
		outfile<<i<<"\t";
		count++;
	if(count==10){
		outfile<<"\n";
		count=0;
		}
	}
}
	outfile.close();
}
return 0;
}

