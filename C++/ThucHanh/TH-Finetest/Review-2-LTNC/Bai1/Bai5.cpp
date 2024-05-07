#include<bits/stdc++.h>
using namespace std;
int main(){
float e;
cout<<"Sai so e = ";cin>>e;	
if(e>0&&e<1){
float s=0,a=1/e;
for(int i=1;;i++){
	s+=1.0/i;
	if(i>a-1&&(a>=i)) break;
}
cout<<"Tong S = "<<s;
}else{
	cout<<"e khong thoa man!";
}
return 0;
}

