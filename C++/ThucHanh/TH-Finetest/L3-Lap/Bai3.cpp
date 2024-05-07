#include<bits/stdc++.h>
using namespace std;
int main(){
float a,b,c,x;
cout<<"A = "; cin>>a;
cout<<"B = "; cin>>b;
cout<<"C = "; cin>>c;
if(a>b){
	if(b>c) x=b;
	else if(a<c) x=a;
	else x=c;
}
else
{
	if(a>c) x=a;
	else if(b<c) x=b;
	else x=c;
}
cout<<"X = "<<x;
return 0;
}

