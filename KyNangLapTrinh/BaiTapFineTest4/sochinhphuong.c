#include<stdio.h>
#include<math.h>
int main(){
int a,n;
printf("Nhap n: ");
scanf("%d",&n);
a=sqrt(n);
if (a*a==n){
	printf("%d la so chinh phuong",n);
}else{
 printf("%d khong phai la so chinh phuong",n);
}
return 0;
}