#include<bits/stdc++.h>
using namespace std;
//Khai bao prototype
void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
void SelectionSort(int M[],int n);
void NhapMang(int M[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++){
		M[i]=-50+rand()%100;
	}
}
void XuatMang(int M[],int n){
	for(int i=0;i<n;i++){
		cout<<M[i]<<"\t";
	}
}
//Thuat toan sap xep chon(chon ptu nho nhat dua ve dau vi tri hien hanh)
void SelectionSort(int M[],int n){
	for(int i=0;i<n-1;i++){
		int vt=i;//gia su so dau trong day nho nhat
	for(int j=i+1;j<n;j++){
		if(M[vt]>M[j])
		vt=j;//cap nhat lai vi tri min
	}
		if(vt!=i){//neu co so nao nho hon dau day dang xet thi thay doi vi tri cho nhau
			int tmp=M[vt];
			M[vt]=M[i];
			M[i]=tmp;
}
	}
}

int main(){
int n;
cout<<"Nhap N = "; cin>>n;
int M[n];
NhapMang(M,n);
cout<<"Mang sau khi nhap:\n";
XuatMang(M,n);
//Sap xep chon
SelectionSort(M,n);
cout<<"\nMang sau khi sap xep:\n";
XuatMang(M,n);
return 0;
}

