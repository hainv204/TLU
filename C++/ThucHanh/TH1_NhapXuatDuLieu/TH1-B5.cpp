/*Y tuong:Dau tien ta su dung vong lap do..while de kiem tra dieu dien
De so luong to tien rut ra la it nhat ta lay so luong to tien tu lon xuong be cho den khi t/m so luong tien can rut */
#include<iostream>
using namespace std;
int main() {
//khai bao x la so tien can rut;m1,m2,m3,m4 la cong thuc tinh de lay so luong to tien
	int x,m1,m2,m3,m4,a=500000,b=200000,c=100000,d=50000;//a,b,c,d la menh gia cua cac to tien
	do {
		cout<<"So tien can rut: ";
		cin>>x;//x la so tien can rut& khong qua 5tr
	} while(x>5000000);
	m1=x/a;
	m2=(x-m1*a)/b;
	m3=(x-m1*a-m2*b)/c;
	m4=(x-m1*a-m2*b-m3*c)/d;//m1,m2,m3,m4 la cac cong thuc tinh co bao nhieu to tien voi so luong cac to tien la it nhat
	cout<<"So luong cac to tien la : \n"<<m1<<" to 500000\n"<<m2<<" to 200000\n"<<m3<<" to 100000\n"<<m4<<" to 50000";
	return 0;
}

