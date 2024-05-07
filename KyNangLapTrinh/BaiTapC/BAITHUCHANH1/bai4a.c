#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int N;
	float X,y;
	printf("Nhap n=");scanf("%d",&N);
	printf("Nhap x=");scanf("%f",&X);
	if(X<= 0)
	printf("Phuong trinh vo nghiem");
	
	else
	printf("G= %g",pow(3,N)+5*fabs(X)-log(3*X));
	
	return 0;
	
}

