#include<bits/stdc++.h>
using namespace std;
void NhapMang(int M[],int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		//M[i]=rand()%100;
		cout<<"M["<<i<<"] = ";cin>>M[i];
	}
}
void XuatMang(int M[],int n){
	for(int i=0;i<n;i++){
		cout<<M[i]<<"\t";
	}
}
void InsertionSort(int M[],int n){
	int j;
	for(int i=1;i<n;i++){
		int tmp=M[i];//Lay ra phan tu can chen
		for(j=i;j>0;j--){//j:vi tri don nhan
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
cout<<"Nhap N = "; cin>>n;
int M[n];
NhapMang(M,n);
cout<<"Mang vua nhap:\n";
XuatMang(M,n);
InsertionSort(M,n);
cout<<"\nMang sau khi sap xep:\n";
XuatMang(M,n);
return 0;
}

