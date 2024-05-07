#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main(){
	float a,b,X,y,f;
	y=0.2;
	printf("Nhap x=");scanf("%f",&X);
	a=sqrt(pow(2,X)+PI);
	b=log(exp(X+1.23)+1);
	f=(cos(3*a)+pow((2*pow(X,3)+X+1),y))/(log10(pow(3,pow(X,2))+2.14*b)/log10(7));
	printf("A= %g",f);
	return 0;
	
}

