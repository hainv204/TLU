#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
		int n,i,a[1000],max,b;
	do{
	printf("Nhap n = "); scanf("%d",&n);
}while(n<=0 || n>=100);
for(i=0;i<n;i++){
	printf("So thu %d: ",i+1);
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++){
	if(max<a[i])
	max=a[i];
}
printf("So lon nhat: %d",max);
printf("\nCac so chinh phuong:");
for(i=0;i<n;i++){
	b=sqrt(a[i]);
if (b*b==a[i]){
	printf(" %d",a[i]);
}
}
return 0;
}