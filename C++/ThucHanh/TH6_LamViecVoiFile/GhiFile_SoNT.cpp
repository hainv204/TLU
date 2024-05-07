#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
if(n<2) return false;
for(int i=2;i<=sqrt(n);i++){
	if(n%i==0) return false;
}
return true;
}
int main(){
ofstream outfile("soNT.txt");
int count=0;
if(outfile.is_open()){
for(int i=1;i<1e3;i++){
	if(isPrime(i)){
	outfile<<i<<" ";
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

