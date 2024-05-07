#include<stdio.h>
#include<math.h>
int main(){
	float x,y;
	printf("Nhap x = ");
	scanf("%f",&x);
	if(x!=1 && x!=-1){
y = (pow(x,3) + x + 1)/(x*x -1);
printf("f(x) = %.3f",y);	
}else 
printf("f(x) = 3");
return 0;
}
