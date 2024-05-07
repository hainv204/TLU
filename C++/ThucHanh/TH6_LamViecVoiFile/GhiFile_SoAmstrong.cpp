#include<bits/stdc++.h>
using namespace std;
int demN(int n){
	int d=0;
	while(n>0){
		n/=10;
		d++;
	}
	return d;
}
bool CheckAms(int n){
	int dem=demN(n);
	int cpy=n,s=0,sd=0;
	while(cpy>0){
		sd=cpy%10;
		cpy/=10;
		s+=pow(sd,dem);
	}
if(s==n) return true;
return false;
}
int main(){
ofstream outfile("soAmstrong.txt");
if(outfile.is_open()){
	int count=0;
	for(int i=1;i<150000;i++){
		if(CheckAms(i)){
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

