#include<bits/stdc++.h>
using namespace std;
int Tohop(int k,int n){
	if(k==0||k==n) return 1;
	return Tohop(k,n-1)+Tohop(k-1,n-1);
}
int main(){
	int k,n;
do{
cout<<"n = ";cin>>n;
cout<<"k = ";cin>>k;
if(k>=0&&k<=n) break;
cout<<"Moi nhap lai so lieu!\n";
}while(true);
cout<<"C("<<k<<","<<n<<") = "<<Tohop(k,n);
return 0;
}

