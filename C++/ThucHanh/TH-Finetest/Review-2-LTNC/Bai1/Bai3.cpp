#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"N = ";cin>>n;
if(n>2&&n<100){
	float s=1;
	for(int i=2;i<=n;i++){
		s+=1*(1.0)/((i-1)*i);
	}
	cout<<"Tong S = "<<s;
}else{
	cout<<"n khong thoa man!";
}
return 0;
}

