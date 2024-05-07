#include <stdio.h>
#include <math.h>
int main (){
	float x,f;
printf("nhap x=");
scanf("%f",&x);
f = (exp(x)-1)/(fabs(x)+1);
printf("gia tri cua bieu thuc = %f",f);
return 0;
}

