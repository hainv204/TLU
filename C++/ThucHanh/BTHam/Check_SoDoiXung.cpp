#include<bits/stdc++.h>
using namespace std;
bool CheckDX(int n){
	int tmp=n,s=0;
	while(tmp!=0){
		s=(s*10+(tmp%10));
		tmp/=10;
	}
	if(s==n) return true;
	return false;
}
int main(){
int n;
cout<<"Nhap N = "; cin>>n;
if(CheckDX(n)) cout<<n<<" la so doi xung";
else cout<<n<<" khong phai la so doi xung";
return 0;
}

