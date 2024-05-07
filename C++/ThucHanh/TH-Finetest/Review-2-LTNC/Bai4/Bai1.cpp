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
int min=a[0][0],max=a[0][0],d=0;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(min>=a[i][j]) min=a[i][j];
		if(max<=a[i][j]) max=a[i][j];
		if(a[i][j]%3==0) d++;
		}
	}
cout<<"Min: "<<min<<endl;
cout<<"Max: "<<max<<endl;
cout<<"So chia het cho 3: "<<d;
return 0;
}

