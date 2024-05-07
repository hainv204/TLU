#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0||n>=10);
int a[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<"A["<<i<<"]["<<j<<"] = ";
		cin>>a[i][j];
	}
}
int d=0;
cout<<"Ma tran A:\n";
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<" "<<a[i][j];
		if(a[i][j]%3==0) d++;
	}
cout<<endl;	
}
cout<<"So chia het cho 3: "<<d;
return 0;
}

