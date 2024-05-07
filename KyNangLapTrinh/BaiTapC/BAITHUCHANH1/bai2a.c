#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float x,y,z=1.67;
	printf("Nhap x= ");scanf("%f",&x);
	y= pow(x,5) + 5*pow(x,z) - 6;
	printf("F= %g",y);
	
	return 0;
}
