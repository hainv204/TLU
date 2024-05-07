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
	cout<<"Mang vua nhap:\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool DoiXung(int a[][max],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]!=a[j][i]) return false;
		}
	}
	return true;
}
int main(){
int n,m;
cout<<"Nhap so hang: ";cin>>n;
cout<<"Nhap so cot: ";cin>>m;
int a[n][max];
Nhap(a,n,m);
Xuat(a,n,m);
if(DoiXung(a,n,m)) cout<<"Ma tran doi xung";
else cout<<"Ma tran khong doi xung";
return 0;
}

