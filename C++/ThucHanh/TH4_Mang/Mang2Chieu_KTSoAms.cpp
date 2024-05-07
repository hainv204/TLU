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
	cout<<"Ma tran vua nhap:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cout<<a[i][j]<<" ";		
		}
		cout<<endl;
	}
}
int demN(int n){
	int dem=0;
	while(n>0){
		n/=10;
		dem++;
	}
	return dem;
}
bool checkAms(int n){
	int d=demN(n),cpy=n,sd=0,s=0;
	while(cpy>0){
		sd=cpy%10;
		cpy/=10;
		s+=pow(sd,d);
	}
	if(s==n) return true;
	return false;
}
void XuatAms(int a[][max],int n,int m){
	cout<<"\nSo Ams trong ma tran:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(checkAms(a[i][j])) cout<<" "<<a[i][j];
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
XuatAms(a,n,m);
return 0;
}

