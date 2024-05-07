#include <stdio.h>
int main(){
	int rut,m1,m2,m3,m4,b=500000,c=200000,d=100000,e=50000;
	printf("nhap so tien can rut : ");scanf("%d",&rut);
      m1=rut/b;
      m2=(rut-m1*b)/c;
      m3=(rut-m1*b-m2*c)/d;
      m4=(rut-m1*b-m2*c-m3*d)/e;
    printf("so luong cac to tien la: %d to 500000\n%26d to 200000\n%26d to 100000\n%26d to 50000",m1,m2,m3,m4);
	return 0;  
}
