#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.1416
int main(){
	float R;
	printf("Ban kinh r= ");scanf("%f",&R);
	printf("Chu vi hinh tron P= %g",2*PI*R);
	printf("\nDien tich hinh tron S= %g",PI*pow(R,2));
	return 0;
}

