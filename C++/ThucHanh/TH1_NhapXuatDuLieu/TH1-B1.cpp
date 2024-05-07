//Y tuong:su dung chuoi ham string de nhap chuoi ten sinh vien va in ra man hinh
#include<iostream>
#include<string>
using namespace std;
int main() {
	string ten,lop ;
	cout<<" Nhap ten sinh vien: ";
	getline(cin,ten);
	cout<<"Lop: ";
	getline(cin,lop);
	cout<<"Loi chao tieng Viet: Xin chao "<<ten<<", Lop "<<lop<<"!\n";
	cout<<"Loi chao tieng Anh: Hello "<<ten<<", Class "<<lop<<"!";
	return 0;
}

