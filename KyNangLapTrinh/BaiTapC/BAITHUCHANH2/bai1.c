#include <stdio.h>
#include <math.h>
int main (){
	float x,f;
printf("nhap x=");
scanf("%f",&x);
f = (pow(x,3)+x+1)/(pow(x,2)+2);
printf ("gia tri cua bieu thuc = %.3f",f);
return 0;
}

