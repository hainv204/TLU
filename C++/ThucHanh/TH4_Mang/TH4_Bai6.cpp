#include<iostream>
using namespace std;
//Ham nhap mang
void NhapMang(float a[][10],int n,int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<"A["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
}
//Ham xuat mang
void XuatMang(float a[][10],int n,int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
//So luong phan tu am,duong trong mang
void DemAmDuong(float a[][10],int n,int m) {
	int d=0,am=0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(a[i][j]>0) d++;
			if(a[i][j]<0) am++;
		}
	}
	cout<<"So luong phan tu duong trong mang:"<<d;
	cout<<"\nSo luong phan tu am trong mang:"<<am;
}
//Tong,TBC cac phan tu hang dau tien
void SumTBC(float a[][10],int m) {
	int d=0;
	float s=0;
	for(int j=0; j<m; j++) {
		s+=a[0][j];
		d++;
	}
	cout<<"\nTong cac phan tu hang dau tien:"<<s;
	cout<<"\nTBC cac phan tu hang dau tien:"<<(float)s/d;
}
//Ham tinh so phan tu chan cot cuoi
void ChanCuoi(float a[][10],int n,int m) {
	int dem=0;
	for(int i=0; i<n; i++) {
		if((int)a[i][m-1]%2==0) dem++;
	}
	cout<<"\nSo phan tu chan o cot cuoi:"<<dem;
}
//ham doi cho hang dau va hang cuoi
void DoiCho(float a[][10],int n,int m) {
	for(int j=0; j<m; j++) {
		swap(a[0][j],a[n-1][j]);
	}
	cout<<endl;
}
int main() {
	int n,m;
	do {
		cout<<"Nhap so hang:";
		cin>>n;
		cout<<"Nhap so cot:";
		cin>>m;
	} while(n<2||m>10);
	float a[n][10];
	NhapMang(a,n,m);
//a.Cac phan tu cua A duoi dang bang
	cout<<"Mang sau khi nhap:\n";
	XuatMang(a,n,m);
//b.Xuat so luong phan tu am,duong trong mang
	DemAmDuong(a,n,m);
//c.Xuat tong va TBC cac phan tu hang dau tien
	SumTBC(a,m);
//d.Xuat so phan tu chan tren cot cuoi
	ChanCuoi(a,n,m);
//Doi cho hang dau va hang cuoi
	cout<<"\nMang sau khi doi cho hang dau va hang cuoi:";
	DoiCho(a,n,m);
	XuatMang(a,n,m);
	return 0;
}

