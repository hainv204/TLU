#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s;
cout<<"N = "; cin>>n;
if(n<=50)s=n*1484;
else if(n<=100) s=50*1484+(n-50)*1533;
else if(n<=200) s=50*1484+50*1533+(n-100)*1786;
else if(n<=300) s=50*1484+50*1533+100*1786+(n-200)*2242;
else if(n<=400) s=50*1484+50*1533+100*1786+100*2242+(n-300)*2503;
else s=50*1484+50*1533+100*1786+100*2242+100*2503+(n-400)*2587;
cout<<"So tien phai nop: "<<s;
return 0;
}

