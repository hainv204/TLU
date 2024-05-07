#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char S[50], c;
	printf("Xau S:"); gets(S);
	printf("Ky tu c:"); c = getchar();
	int dem = 0, i =0;
	for (i = 0; i < strlen(S); i++) {
		if (S[i] == c) dem++;
	}
	if(dem == 0){
		printf("Ky tu c khong co trong S!\n");
	}else{
		printf("Ky tu c co trong S: %d lan.\n", dem);
	}
		for (i = 0; i < strlen(S); i++) {
		S[i] = toupper(S[i]);
	}
	
	printf("In hoa va dao nguoc S:");
	for (i = strlen(S) - 1; i >= 0; i--) {
		printf("%c", S[i]);
	}
	return 0;
}
