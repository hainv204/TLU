#include<iostream>
#include<string.h>
using namespace std;
struct DiaChi{
	char SoNha[25];
	char TenDuong[100];
	char Tinh[25];
};
struct SinhVien{
char MaSV[25];
char TenSV[100];
bool GioiTinh;
DiaChi DiaChiNha;
DiaChi DiaChiTruong;	
}hai,nguyen;//it khi su dung
int main(){
	strcpy(hai.TenSV,"Nguyen Van Hai");
	hai.GioiTinh=true;
	strcpy(hai.MaSV,"2251172332");
	cout<<"MaSV:"<<hai.MaSV<<endl;
	cout<<"Ten:"<<hai.TenSV<<endl;
	cout<<"Gioi Tinh:"<<(hai.GioiTinh==true?"Nam":"Nu");
return 0;
}

