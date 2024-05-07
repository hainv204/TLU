/*Viet 3 ham cho 3 thuat toan noi bot/chen/chon
Trong 3 ham do goi 3 ham do de sap xep tang dan mot day so nguyen bat ki
*/
#include<bits/stdc++.h>
using namespace std;
void NhapMang(int M[],int n){
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
void InsertionSort(int M[],int n){
	int j;
	for(int p=1;p<n;p++){
		int tmp=M[p];//Lay ra phan tu can chen
		for(j=p;j>0;j--){//j:vi tri don nhan
			if(tmp<M[j-1])
			M[j]=M[j-1];//dich ve phia sau
			else
			break;
		}
		M[j]=tmp;//dat phan tu can chen vao dung cho
	}
}
int main(){
	int n;
	cout<<"Nhap N = ";cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang vua nhap: ";
	XuatMang(M,n);
	//Mang sau khi sap xep bubble sort
	cout<<"\nMang sau khi sap xep bang Bubble Sort: ";
	BubbleSort(M,n);
	XuatMang(M,n);
	//Mang sau khi sap xep Selection sort
	cout<<"\nMang sau khi sap xep bang Selection Sort: ";
	SelectionSort(M,n);
	XuatMang(M,n);
	//Mang sau khi sap xep Insertion sort
	cout<<"\nMang sau khi sap xep bang Insertion Sort: ";
	InsertionSort(M,n);
	XuatMang(M,n);
	return 0;
}
