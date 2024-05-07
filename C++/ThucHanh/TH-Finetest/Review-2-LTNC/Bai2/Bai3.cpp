#include<bits/stdc++.h>
int Tohop(int k,int n){
	if(k==0||k==n) return 1;
	return Tohop(k,n-1)+Tohop(k-1,n-1);
}
using namespace std;
int main(){
int n,k;
cout<<"n = ";cin>>n;
cout<<"k = ";cin>>k;
if(k>=0&&k<=n){
	cout<<"C("<<k<<","<<n<<") = "<<Tohop(k,n);
}else{
	cout<<"So lieu khong hop le!";
}
return 0;
}

