#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"n = ";cin>>n;
float x;
cout<<"x = ";cin>>x;
if(n>1&&n<20){
	float s=1,t=0;
	for(int i=2;i<=n;i++){
		t=pow(x,(i-1));
		s+=(1.0)*t/(i);	
	}
	cout<<"Tong S = "<<s;
}else{
	cout<<"n khong thoa man!";
}
return 0;
}

