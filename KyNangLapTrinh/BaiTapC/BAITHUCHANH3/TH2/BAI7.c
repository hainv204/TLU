#include <stdio.h>
#include <math.h>

int main()
{
    
    float xA, yA, xB, yB, xC, yC;
    printf("Nhap toa do diem A: ");
    scanf("%f%f", &xA, &yA);
    printf("Nhap toa do diem B: ");
    scanf("%f%f", &xB, &yB);
    printf("Nhap toa do diem C: ");
    scanf("%f%f", &xC, &yC);

    
    float AB = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
    float AC = sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC));
    float BC = sqrt((xB - xC) * (xB - xC) + (yB - yC) * (yB - yC));
    if (AB + AC == BC || AB + BC == AC || AC + BC == AB)
    {
        printf("3 diem A, B, C thang hang.\n");
    }
    else
    {
        
        float p = (AB + AC + BC) / 2.0;
        float S = sqrt(p * (p - AB) * (p - AC) * (p - BC));
        printf("Dien tich tam giac ABC la: %.2f\n", S);
    }

    return 0;
}