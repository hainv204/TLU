#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s=0,i;
cout<<"N = "; cin>>n;
for(i=1;s+i<n;i++){
	s+=i;
}
cout<<"m lon nhat = "<<i-1;
return 0;
}

