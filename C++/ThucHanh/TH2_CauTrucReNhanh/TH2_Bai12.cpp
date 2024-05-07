//Y tuong:su dung if else long nhau de dat dieu kien va tinh toan,Tong Tien=SL*DonGia*(% giam neu co)
#include<iostream>
using namespace std;
int main() {
//khai bao voi x la so luong,y la don gia(x,y la cac so nguyen duong)
	int x,y;
//khai bao z voi z la tong tien kieu so thuc
	float z;
	cout<<"Nhap so luong mat hang: ";
	cin>>x;
	cout<<"Nhap don gia: ";
	cin>>y;
	if(x>0&&y>0) {
		if(x>=10) {
			z=x*y*0.3;//giam 30% tong tien
			cout<<"Tong tien phai tra: "<<z;
		} else if(x>4&&x<10) {
			z=x*y*0.15;//giam 15% tong tien
			cout<<"Tong tien phai tra: "<<z;
		} else {
			z=x*y;//khong giam
			cout<<"Tong tien phai tra: "<<z;
		}
	} else {
		cout<<"So lieu nhap khong hop le";
	}
	return 0;
}

