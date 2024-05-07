#include<stdio.h>
int main(){
	int n,max,min,a[1000];
	printf("N = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
		max=a[i];
	}
	if(min>a[i]){
		min=a[i];
	}
}
printf("Gia tri lon nhat la:%d",max);
printf("\nGia tri nho nhat la:%d",min);	
return 0;
}
