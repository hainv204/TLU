#include<bits/stdc++.h>
using namespace std;
//Ham nhap mang
void NhapMangA(int a[][5],int n,int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<"A["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
}
void NhapMangB(int b[][5],int n,int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<"B["<<i<<"]["<<j<<"]=";
			cin>>b[i][j];
		}
	}
}
//Ham tinh tong 2 mang C=A+B
void SumC(int a[][5],int b[][5],int c[][5],int n,int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			c[i][j]=a[i][j] + b[i][j];
		}
	}
}
void Cp(int a[][5], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int d = sqrt(a[i][j]);
            if(a[i][j] == d*d) {
                cout << "a[" << i << "][" << j << "] = " << a[i][j] << endl;
            }
        }
    }
}
int main() {
	int n,m;
	do {
		cout<<"Nhap so hang:";
		cin>>n;
		cout<<"Nhap so cot:";
		cin>>m;
	} while(n<1||m>5);
	int a[n][5],b[n][5], c[][5]= {0};
//a.Nhap mang A,B
	NhapMangA(a,n,m);
	NhapMangB(b,n,m);
//b.tinh tong 2 mang C=A+B
	SumC(a,b,c,n,m);
//c.Xuat man hinh ket qua C
	cout<<"Mang C sau khi cong tuong ung:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Cac so chinh phuong trong mang A: \n";
	Cp(a,n,m);
	return 0;
}

