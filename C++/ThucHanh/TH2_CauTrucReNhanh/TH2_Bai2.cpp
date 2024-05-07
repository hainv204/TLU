/* Viet chuong trinh nhap 3 so a,b,c&kiem tra xem 3 canh nhap vao phai tam giac hay khong.Neu khong in thong bao
"Khong phai la canh 3 tam giac" nguoc lai kiem tra xem la tam giac deu,can,thuong va thong bao ra man hinh
-Dieu kien rang buoc la tam giac:Tam giac neu a,b,c>0 va tong 2 canh phai lon hon canh thu 3
-Tam giac can la tam giac co 2 canh bang nhau va canh thu 3 phai khac hai canh con lai
-Tam giac deu la tam giac co 3 canh bang nhau a=b=c
-TH con lai roi vao tam giac thuong
*/
#include<iostream>
using namespace std;
int main() {
	int a,b,c;//Khai bao 3 canh tam giac
	cout<<"Nhap canh a,b,c: ";
	cin>>a>>b>>c;
	if(a<=0||b<=0||c<=0||(a+b)<=c||(a+c)<=b||(b+c)<=a) {
		cout<<"Khong phai la 3 canh tam giac";
	} else {
		if((a==b&&b!=c)||(b==c&&c!=a)||(a==c&&c!=b)) { 
			cout<<"Tam giac can";
		} else if(a==b&&b==c) {
			cout<<"Tam giac deu";
		} else { 
			cout<<"Tam giac thuong";
		}
	}
	return 0;
}

