#include <stdio.h>
#include <string.h>
int main() {
	char S[50];
	printf("Xau S:"); gets(S);
	int dem = 0, i = 0;
	for (i = 0;S[i]!= '\0';i++){
		if(S[i]!=' '&&S[i+1] ==' '|| S[i] !=' '&&S[i+1] =='\0')
		dem++;
		}
		printf("Xau S co %d tu!\n",dem); 
	printf("Dao nguoc S:");
	for (i = strlen(S) - 1; i >= 0; i--) {
		printf("%c", S[i]);
	}
	return 0;
}
