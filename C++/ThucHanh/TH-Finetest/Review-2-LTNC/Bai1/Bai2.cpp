#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"N = ";cin>>n;
if(n>2&&n<20){
	int s=1;
	for(int i=2;i<=n;i++){
		s+=(i-1)*(i+1)*i;
	}
	cout<<"Tong A = "<<s;
}else{
	cout<<"n khong thoa man!";
}
return 0;
}

