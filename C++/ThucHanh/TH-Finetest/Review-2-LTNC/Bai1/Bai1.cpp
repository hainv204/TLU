#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Nhap N = ";cin>>n;
if(n<=0){
	cout<<"n khong duong!";
}else{
	cout<<"So chinh phuong:";
	for(int i=0;i<n;i++){
		int b=sqrt(i);
		if(b*b==i) cout<<" "<<i;
	}
}
return 0;
}

