#include <stdio.h>
#include <math.h>
int main()
{
    /* Nhập tọa độ 3 điểm A, B, C */
    float xA, yA, xB, yB, xC, yC;
    printf("Nhap toa do diem A: ");
    scanf("%f%f", &xA, &yA);
    printf("Nhap toa do diem B: ");
    scanf("%f%f", &xB, &yB);
    printf("Nhap toa do diem C: ");
    scanf("%f%f", &xC, &yC);

    /* Kiểm tra 3 điểm A, B, C có thẳng hàng hay không */
    float AB = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
    float AC = sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC));
    float BC = sqrt((xB - xC) * (xB - xC) + (yB - yC) * (yB - yC));
    if (AB + AC == BC || AB + BC == AC || AC + BC == AB)
    {
        printf("3 diem A, B, C thang hang.\n");
    }
    else if(AB ==AC || AB == BC || AC == BC)
    {
        printf("Tam giac ABC la tam giac can");
    }
    else if(AB == BC && BC == AC)
    {
        printf("Tam giac ABC la tam giac deu");
    }
    return 0;
}