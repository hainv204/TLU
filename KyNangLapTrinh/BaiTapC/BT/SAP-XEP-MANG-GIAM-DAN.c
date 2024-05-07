#include<stdio.h>
int main(){
	int n,i,j,tam,a[1000];
	printf("N = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		if(a[i]<a[j]){
			tam=a[i];
			a[i]=a[j];
			a[j]=tam;
		}
	}
	printf("Day sau sap xep giam dan:");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	return 0;
}
