#include<stdio.h>
#include<math.h>
int chinhphuong(int n) {
	int x = sqrt(n);
	return x*x == n;
	
}

int main() {
	int n, i, s = 0,cnt = 0;
	float tbc;
	printf("N = "); scanf("%d", &n);
	
	printf("Cac so chinh phuong la:");
	for(i = n; i <= 3*n; i++) {
		if(chinhphuong(i)) {
			printf(" %d", i);
			s += i;
			cnt++;
		}
	}
	printf("\nTong cac so chinh phuong la: %d\n", s);
	printf("Trung binh cong cac so chinh phuong la: %g", s / (1.0 * cnt));
	
	
}