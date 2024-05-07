#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,x,x1,x2,delta;
	printf("Nhap a = ");
	scanf("%f",&a);
	printf("Nhap b = ");
	scanf("%f",&b);
	printf("Nhap c = ");
	scanf("%f",&c);
	if(a==0) {
		if(b==0 && c!=0) {
			printf("Phuong trinh vo nghiem!");
		} else if(b==0 && c==0) {
			printf("Phuong trinh co vo so nghiem");
		} else {
			x = -c / b;
			printf("Phuong trinh co mot nghiem x= %g",x);
		}
		} else{
			delta=b*b - 4*a*c;
		if(delta >0) {
			x1 = (float) ((-b+sqrt(delta))/(2*a));
			x2 = (float) ((-b-sqrt(delta))/(2*a));
			printf("Phuong trinh co 2 nghiem la:\nx1 = %g\nx2 = %g",x1,x2);
		} else	if(delta ==0) {
			x1=(-b/(2*a));
			printf("Phuong trinh co hai nghiem kep x1,x2 = %g",x1);
		} else {
			printf("Phuong trinh vo nghiem!");
		}
	}
	return 0;
}
