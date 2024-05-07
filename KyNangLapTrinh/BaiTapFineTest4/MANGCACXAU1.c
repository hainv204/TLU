#include<stdio.h>
#include<string.h>

int main(){
	char a[100][100], w[100];
	int i,n, min;
	printf("N = "); scanf("%d",&n);
	getchar();
	if(n>0){
		for (i=0; i<n;i++){
			printf("Ten ngon ngu lap trinh thu %d: ",i+1);
			gets(w);
		// or	fgets(w,sizeof(w),stdin);
			strcpy(a[i],w);
		}
		strcpy(w,a[0]);
		min=strlen(w);
		for(i=1;i<n;i++)
			if(strlen(a[i])<=min){
				min =strlen(a[i]);
				strcpy(w,a[i]);
			}
	}
	else
		strcpy(w,"");
	printf("Ngon ngu ngan nhat cuoi cung la: %s",w);
return 0;
}
