#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, p, s, ha, hb, hc;
	printf("Nhap canh a = ");scanf("%f", &a);
	printf("Nhap canh b = ");scanf("%f", &b);
	printf("Nhap canh c = ");scanf("%f", &c);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Dien tich tam giac = %g\n", s);
	ha=s*2.0/a;
	hb=s*2.0/b;
	hc=s*2.0/c;
	printf("Duong cao ung voi canh a = %f\n",ha);
	printf("Duong cao ung voi canh b = %f\n",hb);
	printf("Duong cao ung voi canh c = %f\n",hc);
	return 0;
}
