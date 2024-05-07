#include<stdio.h>
#include<math.h>
int main() {
	int n,i,j,a[1000],b,tam,demchan=0,demcp=0;
	do {
		printf("N = ");
		scanf("%d",&n);
	} while(n<=4 || n>=20);
	for(i=0; i<n; i++) {
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Day so da nhap:");
	for(i=0; i<n; i++) {
		printf(" %d",a[i]);
	}
for(i=0;i<n;i++){
	if(a[i]%2==0){
	demchan++;
}
b=sqrt(a[i]);
	if(b*b==a[i]){
		demcp++;
	}
}
printf("\nCo %d so chan trong day",demchan);
printf("\nCo %d so chinh phuong trong day",demcp);
for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++)
			if(a[i]<a[j]) {
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
	}
		printf("\nDay sau sap xep giam dan:");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	return 0;
}