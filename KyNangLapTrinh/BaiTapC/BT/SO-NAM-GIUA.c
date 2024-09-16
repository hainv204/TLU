#include<stdio.h>
int main() {
	float a,b,c,x;
	printf("A = ");
	scanf("%f",&a);
	printf("B = ");
	scanf("%f",&b);
	printf("C = ");
	scanf("%f",&c);
	if(a>b)						//TH1: a>b
		if(a<c)
			x=a;			  //b<a<c =>x=a
		else if(b>c)
			x=b;			//c<b<a =>x=b
		else x=c;
	else 						//TH2: a<b
		if(a>c)
			x=a;
		else if(c>b)
			x=b;
		else x=c;
	printf("X = %g",x);
	return 0;
}
//Rút gọn
#include<stdio.h>
int main() {
    float a,b,c,x;
	printf("A = ");
	scanf("%f",&a);
	printf("B = ");
	scanf("%f",&b);
	printf("C = ");
	scanf("%f",&c);
    /*TH1.Giả sử a là số nằm giữa
    - c<a<b
    - b<a<c
    */
    if ((a >= b && a <= c) || (a <= b && a >= c))
		printf("%g",a);
    /*TH2.Giả sử b là số nằm giữa
    - c<b<a
    - a<b<c
    */
    else if ((b >= a && b <= c) || (b <= a && b >= c))
		printf("%g",b);
    //TH còn lại
	else
        printf("%g",c);
    return 0;
}
