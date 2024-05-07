#include<bits/stdc++.h>
using namespace std;
void NhapMang(int M[],int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		M[i]=rand()%100;
	}
}
void XuatMang(int M[],int n){
	for(int i=0;i<n;i++){
		cout<<M[i]<<"\t";
	}
}
void BubbleSort(int M[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){//giam 1 sau moi buoc
			if(M[j]>M[j+1]){
				int tmp=M[j];
				M[j]=M[j+1];
				M[j+1]=tmp;
			}
		}
	}
}
int main(){
int n;
cout<<"Nhap N = "; cin>>n;
int M[n];
NhapMang(M,n);
cout<<"Mang vua nhap:\n";
XuatMang(M,n);
BubbleSort(M,n);
cout<<"\nMang sau khi sap xep:\n";
XuatMang(M,n);
return 0;
}

