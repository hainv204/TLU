#include<iostream>
using namespace std;
//Ham doi cho 2 so
void DoiCho2So(int &a,int &b) {
	int tmp=a;
	a=b;
	b=tmp;
}
//Ham sap xep mang A tang dan
void SapXepTang(int a[],int n ) {
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i]>a[j]) {
				DoiCho2So(a[i],a[j]);
			}
		}
	}
}
int main() {
	int n;
	do {
		cout<<"Nhap N= ";
		cin>>n;
	} while(n<=0);
	int a[100];
	for(int i=0; i<n; i++) {
		cout<<"A["<<i+1<<"]"<<"= ";
		cin>>a[i];
	}
	SapXepTang(a,n);
	cout<<"Mang A sau khi sap xep tang dan: ";
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}

