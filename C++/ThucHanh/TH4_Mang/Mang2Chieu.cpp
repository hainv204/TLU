#include<bits/stdc++.h>
using namespace std;
/*Nhap/Xuat mang*/
//Nhap N voi A<N<B
void NhapN(int &n,int A,int B){
do{
	cout<<"Nhap N = ";
	cin>>n;
}while(n<=A||n>=B);
}

void NhapMang(int s[],int n){
	for(int i=0;i<n;i++){
	do{
		cout<<"Phan thu thu "<<i+1<<": ";
		cin>>s[i];
	}while(s[i]<100||s[i]>=1000);
}
}
void XuatMang(int s[],int n){
	for(int i=0;i<n;i++){
		cout<<"\t"<<s[i];
	}
}
/*Nhap mang A,B*/
//Nhap mang A
void NhapMangA(int a[][20],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"A["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
//Nhap mang B
void NhapMangB(int b[][20],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"B["<<i<<"]["<<j<<"] = ";
			cin>>b[i][j];
		}
	}
}
/*Xuat hai mang A,B*/
//Xuat mang A
void XuatMangA(int a[][20],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
}
//Xuat mang B
void XuatMangB(int b[][20],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<" "<<b[i][j];
		}
		cout<<endl;
	}
}
//Cong 2 mang C=A+B
void SumC(int a[][20],int b[][20],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[i][j]+b[i][j];
		}
		cout<<endl;
	}
}
//Ham kiem tra so hoan chinh
bool CheckHoanHao(int n){
	int t=0;
	for(int i=1;i<n;i++){
		if(n%i==0) t+=i;
	}
	if(t==n) return true;
	return false;
}
//Xuat cac so hoan hao trong A
void XuatHCA(int a[][20],int m,int n){
	int sum=0,dem=0;
	cout<<"\nCac so hoan chinh trong mang A:";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(CheckHoanHao(a[i][j])){
			cout<<" "<<a[i][j];
			sum+=a[i][j];
			dem++;
		}
	}
	}
	cout<<"\nTBC cac so hoan chinh: "<<(float)sum/dem;
}
int main(){
int m,n;
//Nhap N
NhapN(n,3,21);
//Nhap Xuat mang s[n]
int s[n];
NhapMang(s,n);
cout<<"Mang vua nhap:";
XuatMang(s,n);
do{
	cout<<"\nNhap M = ";
	cin>>m;
}while(m<=2||m>=8);
int a[m][20],b[m][20];
NhapMangA(a,m,n);
NhapMangB(b,m,n);
//Xuat mang A,B
cout<<"Mang A vua nhap:\n";
XuatMangA(a,m,n);
cout<<"\nMang B vua nhap:\n";
XuatMangB(b,m,n);
//Xuat ra cac so hoan chinh trong A va TBC
XuatHCA(a,m,n);
//Cong hai mang va thay the cac so hoan chinh bang so 0
SumC(a,b,m,n);
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if(CheckHoanHao(b[i][j])) b[i][j]=0;
	}
}
cout<<"Mang C sau khi cong:\n";
XuatMangB(b,m,n);
return 0;
}

