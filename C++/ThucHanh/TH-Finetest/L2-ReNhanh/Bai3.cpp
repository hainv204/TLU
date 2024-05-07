#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"N = "; cin>>n;
cout<<"Cac so chia het cho 3 trong khoang N den 2N:";
for(int i=n;i<=2*n;i++){
	if(i%3==0) cout<<" "<<i;
}
return 0;
}

