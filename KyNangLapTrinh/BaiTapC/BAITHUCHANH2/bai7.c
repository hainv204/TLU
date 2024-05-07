#include <stdio.h>
#include <math.h>
int main(){
 float a,b,c;
 printf("Nhap a =");scanf("%f",&a);
 printf("Nhap b =");scanf("%f",&b);
 printf("Nhap c =");scanf("%f",&c);
 printf("F(a) = %.2f \n",log10(a*a+4)/log10(5)+3*exp(a)+a*a*a*a*a);
 printf("F(b) = %.2f \n",log10(b*b+4)/log10(5)+3*exp(b)+b*b*b*b*b);
 printf("F(c) = %.2f \n",log10(c*c+4)/log10(5)+3*exp(c)+c*c*c*c*c);
 return 0;
}

