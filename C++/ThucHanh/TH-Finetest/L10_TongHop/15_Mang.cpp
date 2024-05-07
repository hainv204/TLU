#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"So phan tu n = ";cin>>n;
}while(n<=0);
int a[n];
for(int i=0;i<n;i++){
	cout<<"Phan tu thu "<<i+1<<": ";cin>>a[i];
}
cout<<"\nIn day so:";
for(int i=0;i<n;i++){
	cout<<" "<<a[i];
}
int maxcp=0;
for(int i=0;i<n;i++){
	int b=sqrt(a[i]);
	if((b*b==a[i])&&(maxcp<=a[i])) maxcp=a[i];
}
cout<<endl;
if(maxcp>0) cout<<"\nSo chinh phuong lon nhat la: "<<maxcp;
else cout<<"\nDay khong co so chinh phuong!";
return 0;
}

