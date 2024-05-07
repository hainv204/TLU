//Y tuong: su dung re nhanh if else long nhau de dat dieu kien
#include<iostream>
using namespace std;
int main() {
//khai bao x la so diem bang chu nhap tu ban phim
	char x;
	cout<<"Nhap diem cua ban bang chu: ";
	cin>>x;
	if(x=='A') cout<<"Loai Gioi";
	else if(x=='B') cout<<"Loai Kha";
	else if(x=='C') cout<<"Loai Trung Binh";
	else if(x=='D') cout<<"Loai Trung Binh Yeu";
	else if(x=='F')cout<<"Loai Yeu";
	else cout<<"Loi!Ban nhap diem sai";
	return 0;
}

