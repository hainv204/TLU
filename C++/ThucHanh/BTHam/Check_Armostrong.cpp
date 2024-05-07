#include<bits/stdc++.h>
using namespace std;
int demArm(int n){
	int tmp=0;
	while(n>0){
	n/=10;
	tmp++;
}
return tmp;	
}
int Armstrong(int n){
	int demN=demArm(n);
	int sd=0,s=0,cpy_n=n;
	while(cpy_n>0){
		sd=cpy_n%10;
		cpy_n/=10;
		s+=pow(sd,demN);
}
	if(s==n) return 1;
	else return 0;
}
int main(){
	int n;
	cout<<"Nhap N= "; cin>>n;
	if(Armstrong(n))
		cout<<n<<" la so Armstrong";
	else cout<<n<<" khong phai so Armstrong";	
return 0;
}

