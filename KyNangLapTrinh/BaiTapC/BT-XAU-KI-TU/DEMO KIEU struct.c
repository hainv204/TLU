#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	struct sinhvien{
		long long int masv;
		char ten[50];
	} sv1;
	printf("msv: ");
	scanf("%lld",&(sv1.masv));
	fflush(stdin);
	printf("Ten sv: ");
	gets(sv1.ten);
	printf("msv: %lld - ten sv: %s",sv1.masv,sv1.ten);
return 0;
}

