#include<stdio.h>
#include<math.h>
int main() {
	float x;
	printf("x = ");
	scanf("%f",&x);
	if(x>=1) {
		printf("f(%g) = %.4f",x,pow(x,3)+sqrt(x-1)+3*exp(x));
	} else {
		printf("f(x) khong xac dinh!");
	}
	return 0;
}
