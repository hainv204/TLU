#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main (){
	int n,i,j;
	do
	{
		printf("Nhap N = ");
		scanf("%d",&n);
	} while (n<3);
	for( i = 1;i<=n;i++)
    {
        for( j = 1;j<=n;j++)
        {
            if(i==1 || i== n)
            {
                printf("x ");
            }
            else
            {
                if(j==1 || j ==n)
                {
                    printf("x ");
                }
                else
                    printf("o ");
            }
            
            
        }
        printf("\n");
    }
	
}
