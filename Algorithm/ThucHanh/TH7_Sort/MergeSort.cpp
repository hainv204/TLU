#include<bits/stdc++.h>
using namespace std;
//Khai bao prototype
void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
void MergeSort(int M[],int left,int right);
void Merge(int M[],int mid,int left,int right);
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
void MergeSort(int M[],int left,int right){
	if(left>=right) return;
	int mid=(left+right)/2;//chia mang thanh 2 nua
	MergeSort(M,left,mid);//tach mang tu phan tu trai->phan tu giua thanh nhieu mang con
	MergeSort(M,mid+1,right);//tach mang tu phan tu mid->cuoi thanh cac mang con
	Merge(M,left,mid,right);//tron
}
void Merge(int M[],int left,int mid,int right){
	int numElments=right-left+1;
	int tmp[numElments];
	int pos=0,i=left,j=mid+1;
	while(!(i>mid&&j>right)){
		if((i<=mid&&j<=right)&&(M[i]<M[j])||j>right)
		tmp[pos++]=M[i++];
		else
		tmp[pos++]=M[j++];
	}
	for(i=0;i<numElments;i++){
		M[left+i]=tmp[i];
	}
}
int main(){
	int n;
	cout<<"Nhap N = "; cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang vua nhap:\n";
	XuatMang(M,n);
	MergeSort(M,0,n-1);
	cout<<"\nMang sau khi sap xep:\n";
	XuatMang(M,n);
return 0;
}

