//Y tuong:sd cau lenh re nhanh if else long nhau de dat dieu kien va xuat thong bao
#include<iostream>
using namespace std;
int main() {
//khai bao voi x la so diem nhap tu ban phim
	float x;
	cout<<"Nhap so diem: ";
	cin>>x;
	if(x>=8.5) cout<<"Diem A";
	else if(x>=7&&x<8.5) cout<<"Diem B";
	else if(x>5.5&&x<7) cout<<"Diem C";
	else if(x>=4.5&&x<5.5) cout<<"Diem D";
	else cout<<"Diem F";
	return 0;
}

