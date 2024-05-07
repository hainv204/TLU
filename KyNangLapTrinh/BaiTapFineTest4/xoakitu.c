#include <stdio.h>
#include <string.h>
int isdigit(int c);
int main(){
	
	char w[50];
	printf("Nhap W = "); gets(w);
	
	int i, len = strlen(w);
	printf("W sau khi xoa cac chu so = ");
	

		
		for( i = 0; i < len; i++){
		
		int check = isdigit(w[i]);
		if(check == 0)printf("%c", w[i]);
		}
		
		
	

	return 0;
	
}
