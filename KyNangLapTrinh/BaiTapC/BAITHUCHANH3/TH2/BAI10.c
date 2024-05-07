#include<stdio.h>
#include<math.h>
int main(){
	float x;
	printf("Nhap x = ");
	scanf("%f",&x);
	if(x>=0){
		printf("f(x) = %g",(3*exp(x)-log(x*x))/(x+1));
	}else{
		printf("f(x) = %g",(1+x*x));
	}
return 0;
}
