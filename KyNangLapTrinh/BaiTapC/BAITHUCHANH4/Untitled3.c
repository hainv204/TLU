#include<stdio.h>
#include<math.h>
int main() {
	int n, i, j, arr[1000], max = -1000000, min = 1000000, prime = 0;
	float tbc = 0;
	printf("Nhap n: "); scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("a[%d] = ", i); 
		scanf("%d", &arr[i]);
		max = max < arr[i] ? arr[i] : max;
		min = min > arr[i] ? arr[i] : min;
		tbc += arr[i];
		int checkPrime = 0;
		for(j = 2; j <= sqrt(arr[i]); j++) {
			if(arr[i] % j == 0) {
				checkPrime = 1; break;
			}
		}
		if(!checkPrime) prime++;
	}
	
	for(i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\nSo lon nhat trong day la: %d\n", max);
	printf("So nho nhat trong day la: %d\n", min);
	printf("So so nguyen to la: %d\n", prime);
	printf("Trung binh cong cac so trong day la: %g", tbc / n);
	


}


