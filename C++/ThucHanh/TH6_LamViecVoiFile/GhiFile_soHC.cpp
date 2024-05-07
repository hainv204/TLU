#include<bits/stdc++.h>
using namespace std;
bool checkHC(int n){
	int s=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0) s+=i;
	}
if(s==n) return true;
return false;
}
int main(){
ofstream file("soHC.txt");
if(file.is_open()){
	for(int i=1;i<1e5;i++){
		if(checkHC(i)) file<<i<<endl;
	}
	file.close();
}
return 0;
}

