#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=2||n>=10);
int a[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<"A["<<i<<"]["<<j<<"] = ";
		cin>>a[i][j];
	}
}
int d=0,d1=0;
cout<<"Ma tran A:\n";
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<" "<<a[i][j];
		int b=sqrt(a[i][j]);
		if(b*b==a[i][j]) d++;
		if((b*b==a[i][j])&&(a[i][j]%2==0)) d1++;
	}
cout<<endl;	
}
cout<<"Co "<<d<<" so chinh phuong.\n";
cout<<"Co "<<d1<<" so chinh phuong chan!";
return 0;
}

