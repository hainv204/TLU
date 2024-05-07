#include <string.h>
#include<stdio.h>
int main()
{
    char string[55] = "Lap trinh khong kho";
    char *first, *last;
    first = strchr(string, 'k');
    last = strrchr(string, 'k');
    if (first != NULL)
    {
        printf("Ky tu k xuat hien lan dau tai vi tri %d\n", first - string + 1);
    }
    if (last != NULL)
    {
        printf("Ky tu k xuat hien lan dau tai vi tri %d\n", last - string + 1);
    }
    return 0;
}
