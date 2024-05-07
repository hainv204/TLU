#include<stdio.h>
#include<math.h>
int main(){
	float x,y;
	printf("Nhap x va y = ");
	scanf("%f%f",&x,&y);
	printf("f(x,y) = %g",((log10(x*x+1)/log10(3))+pow(y,3)+sqrt((x*y)*(x*y)+1)+3*exp(x)));
return 0;
}
