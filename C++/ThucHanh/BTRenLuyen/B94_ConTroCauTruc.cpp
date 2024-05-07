#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	int ma;
	char ten[200];
};

int main(){
SinhVien hai;
hai.ma=1888;
strcpy(hai.ten,"Hai");
cout<<"Thong tin:\n";
cout<<hai.ma<<"\t"<<hai.ten<<endl;
//Sd con tro
SinhVien *pH;
pH=new SinhVien;
pH->ma=1889;
strcpy(pH->ten,"Nguyen");
cout<<"Thong tin 1:\n";
cout<<pH->ma<<"\t"<<pH->ten;
return 0;
}

