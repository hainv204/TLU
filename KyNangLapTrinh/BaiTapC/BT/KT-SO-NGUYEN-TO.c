#include<stdio.h>
#include<math.h>
int isPrime(int n){
	if(n<=1) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
int n;
scanf("%d",&n);
if(isPrime(n))
	printf("%d la so nguyen to",n);
else
	printf("%d khong phai la so nguyen to",n);
return 0;
}
