/*BAI4.Viet chuong trinh nhap diem trung binh va hien thi ra ket qua hoc tap theo thang hoc luc phia duoi*/
#include<iostream>
using namespace std;
int main() {
	float x;//khai bao x la diem trung binh
	cout<<"Nhap diem trung binh: ";
	cin>>x;
	if(x>=8.5&&x<=10) { //neu diem trung binh 8.5<=dtb<=10
		cout<<"Hoc luc gioi";
	} else if(x>=7&&x<8.5) { //neu diem trung binh 7<=dtb<8.5
		cout<<"Hoc luc kha";
	} else if(x>=4.5&&x<7) { //neu diem trung binh 4.5<=dtb<7
		cout<<"Hoc luc trung binh";
	} else { //neu diem trung binh dtb<=4.5
		cout<<"Hoc luc yeu";
	}
	return 0;
}

