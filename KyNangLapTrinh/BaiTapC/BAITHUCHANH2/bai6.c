#include <stdio.h>
#include <math.h>

int main() {
	float xA, yA, xB, yB, xC, yC, xM, yM;
	printf("Nhap toa do diem A: ");
	scanf("%f %f", &xA, &yA);
	
	printf("Nhap toa do diem B: ");
	scanf("%f %f", &xB, &yB);
	
	printf("Nhap toa do diem C: ");
	scanf("%f %f", &xC, &yC);
	
	float ab = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
	float bc = sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));
	float ca = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));

	xM = (xB + xC) / 2;
	yM = (yB + yC) / 2;
		
	float am = sqrt(pow(xA - xM, 2) + pow(yA - yM, 2));
	
	printf("Do dai canh AB : %g\n", ab);
	printf("Do dai canh BC : %g\n", bc);
	printf("Do dai canh CA : %g\n", ca);
	printf("Do dai canh AM : %g ", am);
		
}

