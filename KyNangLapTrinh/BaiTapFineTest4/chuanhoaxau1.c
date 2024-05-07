#include <stdio.h>
#include <string.h>

int main(){

    char w[50];
    int i, j;

    printf("Nhap W = "); gets(w);

    int len = strlen(w);

    printf("Chuan hoa = ");
    if(w[0] != '\0'){

        j = 0;
        while(1){

            if(w[j] != ' ')break;
            j++;

        }


        for(i = j; i < len; i++){

            if( w[i] != ' ' || (w[i] == ' ' && w[i+1] != ' ' && (i + 1) < len) ){

                printf("%c", w[i]);
            }

        }


    }

    return 0;

}