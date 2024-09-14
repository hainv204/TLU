#include <stdio.h>
#include <math.h>
int main (){
	float x,f;
	printf ("nhap x = ");
	scanf("%f",&x);
	f = (log10(x*x+4)/log10(3))+x*x*x+sqrt(pow(x,4)+1)+3*exp(x);
	printf("gia tri cua bieu thuc = %f",f);
	return 0;
}

