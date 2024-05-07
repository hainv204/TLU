#include<stdio.h>
#include<string.h>
int main(){
	char username[30],password[20];
	printf("Username: "); gets(username);
	fflush(stdin);
	printf("Password: "); gets(password);
	if(strcmp(username,"admin")==0 && strcmp(password,"admin")==0){
		printf("Dang nhap thanh cong");
	}else{
		printf("Username va password khong dung");
	}
	
return 0;
}
