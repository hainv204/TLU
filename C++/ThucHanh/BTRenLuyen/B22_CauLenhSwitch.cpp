/*
a)Hay cho biet thang do co bao nhieu ngay
b)Tinh xem ngay do la ngay thu bao nhieu trong nam
c)Tim ngay truoc ngay vua nhap
d)Tim ngay ke tiep
*/
#include<bits/stdc++.h>
using namespace std;
//Khai bao ham so ngay
int songay(int m,int y){
	switch(m){
	//4,6,9,11->30 days
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return ((y%400==0)||(y%4==0&&y%100!=0))?29:28;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	default:
	return -1;	
	}
}
//cau b
int ngaytrongnam(int d,int m,int y){
	int ntn=0; //ntn: ngay trong nam
	for(int i=1;i<m;i++){
		ntn+=songay(i,y);
	}
	ntn+=d;
	return ntn;
}
//Cau d
int NgayKeTiep(int d,int m,int y){
	int nct=songay(m,y);//nct=ngay cua thang
	if(d==nct){
		if(m==12){
			d=1;
			m=1;
			y++;
		}else{
			d=1;
			m++;
		}
	}else{
		d++;
	}
	cout<<"Ngay Ke Tiep: "<<d<<"/"<<m<<"/"<<y;
}
int main(){
int d,m,y;
do{
cout<<"Nhap ngay,thang,nam: ";
cin>>d>>m>>y;	
}while(d<1||d>31||m<1||m>12||y<1);
//Cau a
cout<<"So ngay cua thang "<<m<<" la: "<<songay(m,y);
//Cau b
cout<<"\nNgay trong nam: "<<ngaytrongnam(d,m,y)<<endl;
//Cau d
NgayKeTiep(d,m,y);
return 0;
}

