#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,fa,fb,fc;
	printf("a,b,c = ");
	scanf("%f%f%f",&a,&b,&c);
	fa = ((log10(a*a +4)/log10(5))+3*exp(a)+pow(a,5));
	fb = ((log10(b*b +4)/log10(5))+3*exp(b)+pow(b,5));
	fc = ((log10(c*c +4)/log10(5))+3*exp(c)+pow(c,5));
	printf("TBC = %.2f",(fa+fb+fc)/3);
	
return 0;
}
