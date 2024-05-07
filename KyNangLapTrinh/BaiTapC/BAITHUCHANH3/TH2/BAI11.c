#include<stdio.h>
#include<math.h>
int main(){
long long int msv;
	char hvt[30];
	float tb;
	printf("Ho va ten : "); gets(hvt);
	printf("Ma sinh vien : "); scanf("%lld",&msv);
	printf("Diem tb : "); scanf("%f",&tb);
	printf("\nHo va ten :%s\tMa sinh vien :%lld\tDem tb %.2f",hvt,msv,tb);
	if(tb<6.5)
		printf("\nHoc luc trung binh!");
	else if(tb>=6.5 && tb<8.0)
		printf("\nHoc luc kha!");
	else if(tb>=8.0)
		printf("\nHoc luc gioi!");	
	return 0;

}
