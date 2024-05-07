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
void QuickSort(int M[],int left,int right){//doi voi quicksort left=0,right=n
	if(left>=right) return;//diem dung
	int pivot=M[(left+right)/2];//lay phan tu giua trong danh sach
	int i=left,j=right;
	//phan hoach
	do{
		while(M[i]<pivot) i++;//tim vi sai ben trai cua pivot
		while(M[j]>pivot) j--;//tim vi tri sai ben phai cua pivot(chay nguoc ds len)
		//hoan doi
		if(i<=j){
			int tmp=M[i];
			M[i]=M[j];
			M[j]=tmp;
			i++;
			j--;
		}
	}while(i<j);//ket thuc khi j<=i
	//de quy
	QuickSort(M,left,j);//tuc la bh j o ben trai
	QuickSort(M,i,right);//i vuot qua pivot,ta phan hoach ben phai
}
int main(){
int n;
cout<<"Nhap N = "; cin>>n;
int M[n];
NhapMang(M,n);
cout<<"Mang vua nhap:\n";
XuatMang(M,n);
QuickSort(M,0,n-1);
cout<<"\nMang sau khi sap xep:\n";
XuatMang(M,n);
return 0;
}

