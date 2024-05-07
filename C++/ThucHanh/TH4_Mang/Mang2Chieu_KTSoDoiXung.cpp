#include<bits/stdc++.h>
#define max 100
using namespace std;
void Nhap(int a[][max],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"A["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void Xuat(int a[][max],int n,int m){
	cout<<"\nMa tran vua nhap:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cout<<a[i][j]<<" ";		
		}
		cout<<endl;
	}
}
bool CheckDX(int n){
	int s=0,t,cpy=n;
	while(cpy>0){
		s=(s*10+(cpy%10));
		cpy/=10;
	}
	if(s==n) return true;
	return false;
}
void XuatSoDX(int a[][max],int n,int m){
	cout<<"\nSo doi xung trong ma tran:";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(CheckDX(a[i][j])) cout<<" "<<a[i][j];
		}
	}
}
int main(){
int n,m;
cout<<"Nhap so hang: ";cin>>n;
cout<<"Nhap so cot: ";cin>>m;
int a[n][max];
Nhap(a,n,m);
Xuat(a,n,m);
XuatSoDX(a,n,m);
return 0;
}

