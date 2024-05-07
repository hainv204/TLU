#include<iostream>
using namespace std;
//Ham nhap mang
void NhapMang(float b[],int n) {
	for(int i=0; i<n; i++) {
		cout<<"B["<<i<<"]= ";
		cin>>b[i];
	}
}
//Ham xuat mang
void XuatMang(float b[],int n) {
	for(int i=0; i<n; i++) {
		cout<<b[i]<<" ";
	}
}
//Sap Xep
void SapXep(float b[],int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(b[i]>b[j]) swap(b[i],b[j]);
		}
	}
}
//Ham kiem tra xem cac phan tu B co theo thu tu tang dan hay khong
bool DaTangDan(float b[], int n) {
	for (int i = 1; i < n; i++) {
		if (b[i] < b[i - 1]) {
			return false;
		}
	}
	return true;
}
//Ham xoa cac ptu trong day B co gia tri nho hon x
void DelX(float b[], int& n) {
	int x;
	cout << "\nNhap x: ";
	cin >> x;

	int newSize = 0; // Kich thuoc mang sau khi xoa
	for (int i = 0; i < n; i++) {
		if (b[i] >= x) {
			b[newSize] = b[i];
			newSize++;
		}
	}

	n = newSize; // Cap nhat kich thuoc mang

	cout << "Mang sau khi xoa:";
	for (int i = 0; i < n; i++) {
		cout << " " << b[i];
	}
}
int main() {
	int n;
	do {
		cout<<"Nhap n:";
		cin>>n;
	} while(n<=0||n>30);
	float b[n];
//Nhap mang
	NhapMang(b,n);
//Kiem tra xem B sap xep tang dan khong?
	if(DaTangDan(b,n)) {
		cout<<"Mang B theo thu tu tang dan:";
		XuatMang(b,n);
	} else {
		cout<<"Mang B sau khi da sap xep:";
		SapXep(b,n);
		XuatMang(b,n);
	}
//
	DelX(b,n);
	return 0;
}

