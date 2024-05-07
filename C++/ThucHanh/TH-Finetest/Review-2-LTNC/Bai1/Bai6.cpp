#include<bits/stdc++.h>
using namespace std;
int main(){
float e,x;
cout<<"Sai so e = ";cin>>e;
if(e>0&&e<1){
	cout<<"x = ";cin>>x;
	float s=1,t=0,a=1/e;
	for(int i=2;;i++){
		t=pow(x,(i-1));
		s+=(1.0)*t/i;
		if(a>=i&&((a-1)<i)) break;
	}
	cout<<"Tong S = "<<s;
}else{
	cout<<"e khong thoa man!";
}
return 0;
}

