#include<stdio.h>
int main() {
	int N,tien;
	printf("N = ");
	scanf("%d",&N);
	if(N<=50) {
		tien = N*1484;
	} else if(N<=100) {
		tien = 50*1484 +(N-50)*1533;
	} else if(N<=200) {
		tien = 50*1484 + 50*1533 +(N-100)*1786;
	} else if(N<=300) {
		tien = 50*1484 + 50*1533 + 100*1786 + (N-200)*2242;
	} else if(N<=400) {
		tien = 50*1484 + 50*1533 + 100*1786 + 100*2242 + (N-300)*2503;
	} else {
		tien = 50*1484 + 50*1533 + 100*1786 + 100*2242 + 100*2503 + (N-400)*2587;
	}
	printf("So tien phai nop: %d",tien);
	return 0;
}


