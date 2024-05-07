#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.1416
int main(){
	float A,B,x,r;
	printf("Do dai canh thu 1 la ");scanf("%f",&A);
	printf("Do dai canh thu 2 la ");scanf("%f",&B);
	printf("Goc xen giua la ");scanf("%f",&x);
	r=(x*PI)/180;
	printf("S= %g",0.5*A*B*sin(r));
	return 0;
}

