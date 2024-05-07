#include<stdio.h>
#include<string.h>
int i;
int main(){
	struct sinhvien{
		int id;
		char ten[50];
	}sv[5];
	for(i=0;i<5;i++){
		printf("Nhap ID:");
		scanf("%d",&(sv[i].id));
		printf("\nNhap ten sinh vien %d: ",i+1);
			fflush(stdin);
		scanf("%s",(sv[i].ten));
	}
	printf("Danh sach sinh vien:\n");
	for(i=0;i<5;i++){
	printf("ID : %d - Ten sinh vien: %s\n",sv[i].id,sv[i].ten);
}
return 0;
}

