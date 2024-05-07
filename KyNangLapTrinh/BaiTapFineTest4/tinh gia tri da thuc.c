#include <stdio.h>
#include <math.h>
#include <conio.h>
float x,a0,a1,a2,a3,a4,t;
int main(){
	printf("X = ");  scanf("%g",&x);
	printf("A0 = "); scanf("%g",&a0);
	printf("A1 = "); scanf("%g",&a1);
	printf("A2 = "); scanf("%g",&a2);
	printf("A3 = "); scanf("%g",&a3);
	printf("A4 = "); scanf("%g",&a4);
	    t= a0+a1*x+a2*x*x+a3*x*x*x+a4*x*x*x*x;
	printf("f(x) = %g",t);
	return 0;
}

