#include<iostream>
using namespace std;
//Ham nhap mang
void NhapMang(int b[][10],int n,int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<"B["<<i<<"]["<<j<<"]=";
			cin>>b[i][j];
		}
	}
}
//Ham xuat mang
void XuatMang(int b[][10],int n,int m) {
	cout<<"Mang vua nhap:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
//Ham tinh cac phan tu duong chan tren tung cot
void PtuDuongChan(int b[][10],int n,int m) {
	cout<<"Cac phan tu duong chan tren tung cot:";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(b[i][j]>0&&b[i][j]%2==0) cout<<b[i][j]<<" ";
		}
	}
}
//Ham tinh so phan tu chia het cho 3 tren tung hang
void PtuChiaHet3(int b[][10],int n,int m) {
	int d=0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(b[i][j]%3==0) d++;
		}
	}
	cout<<"\nSo phan tu chia het cho 3 tren tung hang:"<<d;
}
//Ham xuat so phan tu lon nhat va nho nhat cot cuoi
void MaxMinLast(int b[][10],int n,int m) {
	int max=-1000000,min=1000000;
	for(int i=0; i<n; i++) {
		if(max<b[i][m-1]) max=b[i][m-1];
		if(min>b[i][m-1]) min=b[i][m-1];
	}
	cout<<"\nSo phan tu lon nhat cot cuoi cung:"<<max;
	cout<<"\nSo phan tu nho nhat cot cuoi cung:"<<min;
}
//Ham tinh tong gia tri le hang dau tien
void TongLeHangDau(int b[][10],int n,int m) {
	int s=0;
	for(int j=0; j<m; j++) {
		if(b[0][j]%2!=0) s+=b[0][j];
	}
	cout<<"\nTong gia tri le hang dau tien:"<<s;
}
int main() {
	int n,m,b[n][10];
	do {
		cout<<"Nhap so hang:";
		cin>>n;
		cout<<"Nhap so cot:";
		cin>>m;
	} while(n<2||m>10);
	NhapMang(b,n,m);
	XuatMang(b,n,m);
//a.Xuat cac phan tu duong chan o cac cot
	PtuDuongChan(b,n,m);
//b.Xuat so phan tu chia het cho 3 tren tung hang
	PtuChiaHet3(b,n,m);
//c.Xuat gia tri phan tu lon nhat va nho nhat cua cot cuoi
	MaxMinLast(b,n,m);
//d.Xuat tong cac phan tu gia tri le hang dau tien
	TongLeHangDau(b,n,m);
	return 0;
}

