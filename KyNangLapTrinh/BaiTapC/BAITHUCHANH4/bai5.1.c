#include<stdio.h>
#include<math.h>
int main() {
	int n, i, j, arr[1000], maxCP = -1000000;
	printf("Nhap n: ");
	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);

		int c = sqrt(arr[i]);
		if(c*c == arr[i]) maxCP = maxCP < arr[i] ? arr[i] : maxCP;

	}
	printf("Day so la: ");
	for(i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\nDay so in nguoc lai la: ");
	for(i = n-1; i >= 0; i--) printf("%d ", arr[i]);

	if(maxCP == -1000000) printf("\nDay khong co so chinh phuong");
	else printf("\nSo chinh phuong lon nhat trong day la: %d\n", maxCP);


}