#include<stdio.h>
int main() {
	int n;
	while(n!=5) {
		printf("[1] Buoi sang\n[2] Buoi trua\n[3] Buoi chieu\n[4] Buoi toi\n[5] Ket thuc\nChon chuc nang: ");
		scanf("%d",&n);
		switch(n) {
			case 1:
				printf("Chao buoi sang\n");
				break;
			case 2:
				printf("Den gio nghi trua roi, di an thoi\n");
				break;
			case 3:
				printf("Het gio lam viec, ve nha nao\n");
				break;
			case 4:
				printf("Chuan bi ngu buoi toi\n");
				break;
			case 5:
				printf("Chuc ngu ngon\n");
				return 0;
		}
	}
}
