#include<stdio.h>
#include<math.h>
int main() {
	int a,t;
	char ht[30];
	printf("ho va ten : ");
	gets(ht);
	do {
		printf("nam hoc : ");
		scanf("%d",&a);
	} while(a<=0 || a>=5);
	if(a==1)
		t=30*400000;
	else if(a==2)
		t=40*400000;
	else if(a==3)
		t=35*400000;
	else
		t=20*400000;
	printf("tien hoc phi sinh vien phai dong = %d",t);
	return 0;
}
