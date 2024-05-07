#include<bits/stdc++.h>
using namespace std;
struct book{
	char title[50];
	char author[50];
	int pages;
	float price;
};
int main(){
book b;
cout<<"Nhap ten sach:";
gets(b.title);
cout<<"Nhap tac gia:";
gets(b.author);
cout<<"Nhap so trang:";
cin>>(b.pages);
cout<<"Nhap gia:";
cin>>(b.price);

book a=b;
cout<<"Ten sach: "<<a.title<<endl;
cout<<"Tac gia: "<<a.author<<endl;
cout<<"So trang: "<<a.pages<<endl;
cout<<"Gia: "<<a.price;
a.price=95000;//TH ngoai le trong cau truc C++
cout<<"\nGia cua b.price: "<<b.price;
return 0;
}

