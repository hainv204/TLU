/*Y tuong:Khai bao ham SoNgay kieu int va ham void tinh so NgayKeTiep.Kiem tra neu so ngay nhap khong dung thi in thong bao
"3 so nhap vao khong phai ngay thang nam", nguoc lai o ham tinh NgayKeTiep neu dieu kien tong kiem tra so ngay
nhap vao=ngay cua thang(nct) neu dieu kien dung thi ta kiem tra dieu kien cac thang:
+neu la thang 12 thi ta reset ngay=thang=1 va nam tang them 1
+neu la cac thang khac thi ta giu nguyen nam,reset ngay=1,thang tang them 1
Nguoc lai,neu so ngay nhap vao khac so ngay cua thang thi ta giu nguyen thang,nam va ta tang ngay them 1
*/
#include<iostream>
using namespace std;
int SoNgay(int month,int year) {
	if(month==4||month==6||month==9||month==11) return 30;
	else if(month==2) return (year%400==0||(year%100!=0&&year%4==0))?29:28;
	else return 31;
}
void NgayKeTiep(int day,int month,int year) {
	int nct=SoNgay(month,year);
	if(day==nct) {
		if(month==12) {
			day=1;
			month=1;
			year++;
		} else {
			day=1;
			month++;
		}
	} else {
		day++;
	}
	cout<<"Ngay tiep theo: "<<day<<"/"<<month<<"/"<<year;//sau khi ham kiem tra ket thuc thi ta in ra duoc gia tri moi
}
int main() {
	int day,month,year;
	cout<<"Nhap ngay,thang,nam:";
	cin>>day>>month>>year;
	if(day<1||day>31||month<1||month>12||year<1) {
		cout<<"Ba so nhap vao khong phai la ngay thang nam";
	} else {
		NgayKeTiep(day,month,year);//goi lai ham de in ket qua ra man hinh
	}
	return 0;
}

