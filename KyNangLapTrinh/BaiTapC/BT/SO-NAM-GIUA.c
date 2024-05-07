#include<stdio.h>
int main() {
	float a,b,c,x;
	printf("A = ");
	scanf("%f",&a);
	printf("B = ");
	scanf("%f",&b);
	printf("C = ");
	scanf("%f",&c);
	if(a>b)						//TH1: a>b
		if(a<c)
			x=a;			  //b<a<c =>x=a
		else if(b>c)
			x=b;			//c<b<a =>x=b
		else x=c;
	else 						//TH2: a<b
		if(a>c)
			x=a;
		else if(c>b)
			x=b;
		else x=c;
	printf("X = %g",x);
	return 0;
}

