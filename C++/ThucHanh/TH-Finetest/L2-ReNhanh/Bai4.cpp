#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
float s=0;
cout<<"N = "; cin>>n;
for(int i=n;i>=1;i--){
	s=sqrt(s+i);
}
cout<<"F(n) = "<<s;
return 0;
}

