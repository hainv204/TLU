#include <stdio.h>

#include <conio.h>

#include <string.h>
int main()

{

    char s[50];

    char kitukiemtra;

    int dem,i;

    printf("Nhap vao mot chuoi: ");

    gets(s);

    printf("Nhap vao ki tu muon kiem tra: ");

    scanf("%c",&kitukiemtra);

    for(i=0;i<strlen(s);i++)

    {

        if(s[i]==kitukiemtra)

        dem++;

    }

    if(dem==0)

    printf("Ki tu %c khong co trong chuoi",kitukiemtra);

    else

    printf("Ki tu %c xuat hien %d lan trong chuoi",kitukiemtra,dem);

   return 0;

}

