#include<stdio.h>
#include<mAth.h>
int main(){
	float x,y;
	printf("Nhap x = ");
	scanf("%f",&x);
	if(x>0){
		y = (3*exp(2*x) -pow(x,3) +1)/(fabs(x)+1);
		printf("f(x) = %.2f",y);
	}else{
	}
return 0;
}
