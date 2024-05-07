#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float A,B,C,p,s;
	printf("Nhap canh a=");scanf("%f",&A);
	printf("Nhap canh b=");scanf("%f",&B);
	printf("Nhap canh c=");scanf("%f",&C);
	p=(A+B+C)/2;
	s=p*(p-A)*(p-B)*(p-C);
	printf("S= %g",sqrt(s));
	return 0;
}

