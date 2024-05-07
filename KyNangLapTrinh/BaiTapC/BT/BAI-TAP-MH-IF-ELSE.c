#include <stdio.h>
#include<math.h>
#include<conio.h>
int main () {
	float x;
	printf("x=");
	scanf("%f",&x);
	if(x>=1)
		printf("f(x)=%.4f",pow(2,x)+sqrt(x-1)+3*exp(x));
	else
		printf("Bieu thuc khong xac dinh!");
	return 0;
}




