#include <stdio.h>
#include <math.h>

int main () {
	int a[100], n, i, j;
	printf("Nhap n = "); scanf("%d", &n);
	//nhap phan tu vao mang
	for (i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf ("%d",&a[i]);
	}
	//xuat phan tu trong mang
	printf("Day vua nhap:");
	for (i=0; i<n; i++){
		printf(" %d",a[i]);
	}
	
	//tim min, max trong mang
	int min=a[0], max=a[0];
	for (i=0; i<n; i++){
		if(a[i]<min)
			min = a[i];
		if(a[i]>max)
			max = a[i];
	}
	printf("\nMin = %d", min);
	printf("\nMax = %d", max);
	//tim vi tri max, min trong mang
	for (i=0; i<n; i++){
		if(a[i]==min)
			printf("\nChi so cua min: %d",i);
		if(a[i]==max)
			printf("\nChi so cua max: %d",i);
	}
	
	//sap xep phan tu trong mang 
	//thuat toan sap xep noi bot
	for (i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int tmp;
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	//day sau khi sap xep
	printf("\nDay vua sap xep: ");
	for (i=0; i<n; i++){
		printf(" %d",a[i]);
	}
	
	//in cac so nguyen to trong mang
	printf("\nDay cac so nguyen to trong mang: ");
	for (i=0; i<n; i++){
		int demnt=0;
		if (a[i]>=2){
			for (j=2; j<=sqrt(a[i]); j++){
				if (a[i]%j==0){
					demnt++;
				}
			}
			if(demnt==0) printf(" %d", a[i]);
		}
		
	}
	//dem cac so am trong mang
	int demna=0;
	for(i=0; i<n; i++){
		if (a[i]<0)
			demna++;
	}
	printf("\nSo so am trong day: %d",demna);
	
	//chen phan tu vao mang
	int y, k;
	printf("\nNhap so y can chen = "); scanf("%d", &y);
	printf("Nhap vi tri can chen k = "); scanf("%d", &k);
	if(k<0){
		//hoac co the dung k=0 chuyen sang tiep theo
		n=n+1;
		for (i=n-1; i>0; i--){
			a[i+1]=a[i];
		}
		a[0]=y;
	}
	else if(k>=n){
		n=n+1;
		a[n-1]=y;
		
	}
	else{
		for(i = n; i > k; i--)
			a[i] = a[i-1];
		a[k] = y;
		n = n + 1;
	}
	
	printf("\nDay vua chen: ");
	for (i=0; i<n; i++){
		printf(" %d",a[i]);
	}
	//xoa phan tu thu m khoi mang
	int m;
	printf("\nNhap vi tri can xoa m = "); scanf("%d",&m);
	for(i = m+1; i < n; i++)
		a[i-1] = a[i];
	n = n - 1;
	printf("\nDay vua xoa: ");
	for (i=0; i<n; i++){
		printf(" %d",a[i]);
	}
	
	
	
	
	
	
		
	
	
}
