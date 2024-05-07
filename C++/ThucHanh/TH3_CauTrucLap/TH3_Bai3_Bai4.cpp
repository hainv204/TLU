#include<iostream>
#include<cmath>
using namespace std;
int main() {
	/*Bai 3.
	Input:Nhap mot day so nguyen duong dung khu nhap den 0
	Output:Tong va gia tri trung binh cua day
	Y tuong:bai toan yeu cau nhap vao mot day so duong cho den khi nhap 0 thi dung lai.Vay ta da biet cin>> la nhan du lieu nhap tu ban phim
	ta dat vao vong lap while de nhap cac gia tri x lien tuc tu ban phim.De giai quyet bai toan nay ta sd vong lap while vinh cuu va sd if-else trong
	while de kiem tra dieu kien neu ta nhap x>0 dieu kien dung tiep tuc lap va nhap gia tri x tiep theo,neu x==0 kiem tra dieu kien gap break lap tuc
	dung chuong trinh thoat vong lap*/
	int x,s=0,d=0;
	cout<<"Nhap vao mot day so duong:\n";
	while(true) {
		cin>>x;
		if(x==0) {
			break;
		} else {
			s+=x;
			d++;//dem x>0
		}
	}
	cout<<"Tong day so nguyen duong: "<<s<<endl;
	cout<<"Gia tri trung binh cua day: "<<(float)s/d;

	cout<<endl;
	/*Bai 4.
	Input:So nguyen duong N
	Output:-In ra man cac so chinh phuong <=N
		   -N am yeu cau nhap lai
	Y tuong: sd vong lap do...while de kiem tra dieu kien,ta biet so chinh phuong la so bang binh phuong cua mot so nguyen.
	Ta sd gan b=sqrt(i) va sd vong lap for de duyet lien tuc,if de kiem tra dieu kien va in ra cac so chinh phuong
	*/
	int n,b;
	do {
		cout<<"Nhap so nguyen duong N: ";
		cin>>n;
	} while(n<0);
	cout<<"Cac so chinh phuong <=N: ";
	for(int i=1; i<=n; i++) {
		b=sqrt(i);
		if(b*b==i) cout<<i<<" ";
	}
	return 0;
}


