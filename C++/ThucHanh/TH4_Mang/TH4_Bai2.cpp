#include<iostream>
using namespace std;
//Ham nhap mang
void NhapMang(float b[],int n) {
	for(int i=0; i<n; i++) {
		cout<<"B["<<i<<"]= ";
		cin>>b[i];
	}
}
//Phan tu lon nhat cua day
void PhantuMax(float b[],int n) {
	float max=b[0];
	for(int i=0; i<n; i++) {
		if(max<b[i]) max=b[i];
	}
	cout<<"Phan tu lon nhat trong day:"<<max;
}
//Tim trong day B co bao nhieu ptu co gia tri lon hon hoac bang x
void SoX(float b[],int n) {
	float x;
	cout<<"\nNhap x:";
	cin>>x;
	cout<<"Phan tu lon hon hoac bang x trong day B:";
	for(int i=0; i<n; i++) {
		if(b[i]>=x) cout<<" "<<b[i];
	}
}
//Ham tinh in ra man hinh gia tri phan tu tai vi tri k trong day
void SoK(float b[],int n) {
	int k;
	do {
		cout<<"\nNhap k:";
		cin>>k;
	} while(k<1||k>n);
	cout<<"Gia tri phan tu tai chi so k trong day:";
	for(int i=0; i<n; i++) {
		if(k==i) cout<<b[i];
	}
//Xoa phan tu khoi day B,dich chuyen mang ve ben trai tu vi tri xoa
	for(int i=k; i<n-1; i++) {
		b[i]=b[i+1];
	}
//giam so luong ptu
	n--;
	cout<<"\nMang B sau khi xoa:";
	for(int i=0; i<n; i++) cout<<" "<<b[i];
}
int main() {
	int n;
	do {
		cout<<"Nhap n:";
		cin>>n;
	} while(n<=0||n>10);
	float b[n];
//Nhap mang
	NhapMang(b,n);
//Phan tu max trong day
	PhantuMax(b,n);
//Xuat cac so a[i] lon hon hoac bang x
	SoX(b,n);
//Xuat gia tri tai chi so k,xoa ptu khoi day va in day B sau khi xoa
	SoK(b,n);
	return 0;
}

