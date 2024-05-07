/*BAI3.Nhap vao mot so thuc x.Neu x khong am thi tinh can bac bon cua x nguoc lai in thong bao "Khong tinh duoc"
Y tuong : tinh can bac n chuyen ve ham mu x^n roi sd ham pow de tinh toan*/
#include<cmath>
#include<iostream>
using namespace std;
int main() {
//khai bao x kieu so thuc
	float x;
	cout<<"Nhap x= ";
	cin>>x;
	if(x>0) cout<<"X = "<<(pow(x,1.0/4));//dieu kien dung thi tinh X
	else cout<<"Khong tinh duoc";
	return 0;
}

