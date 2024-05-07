#include <stdio.h>
#include <string.h>
    int main()
{
    char string[55] = "Lap trinh khong kho";
    char *first;
    first = strstr(string, "kho");
    if (first != NULL)
    {
        printf("Vi tri xuat hien dau tien cua \"kho\" trong \"%s\" la"
               " \"%s\"",
               string, first);
    }else{
        printf("Khong tim thay!\n");
    }
}
