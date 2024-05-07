#include<stdio.h>
int main() {
	float a,b,c,x;
	printf("A = ");
	scanf("%f",&a);
	printf("B = ");
	scanf("%f",&b);
	printf("C = ");
	scanf("%f",&c);
	if(a<=b)
		if(a>=c)
			x=a;
		else if(b<=c)
			x=b;
		else x=c;
	else //a>b
	 if(b>=c)
		x=b;
	else if(c<=a)
		x=c;
	else x=a;
	printf("X = %g",x);
	return 0;
}
