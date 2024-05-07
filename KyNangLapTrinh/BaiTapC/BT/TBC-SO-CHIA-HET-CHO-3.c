#include<stdio.h>
int main() {
	int n,i,a[1000],s=0,d=0;
	printf("N = ");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
		if(a[i]%3==0)
			s+=a[i];
	d++;
	if(d>0)
		printf("TBC cac so chia het cho 3: %g",(float)s/d);
	else
		printf("Trong day khong co so chia het cho 3");
	return 0;
}
