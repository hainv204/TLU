#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s=0;
cout<<"N = "; cin>>n;
for(int i=1;i<=n;i++){
	s+=i*(i-1)*(i+1);
}
cout<<"A = "<<s;
return 0;
}

