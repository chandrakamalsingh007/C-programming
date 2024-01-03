#include<stdio.h>
int main(){
    int i,j;
     char a[][]={"pulchowk","thapathali"};
    printf("your 2d character is \n");
    for(i=0;i<2;i++){
        for(j=0;a[i][j]='\0';j++)
        {
            printf("%c",a[i][j]);

        }
        printf("\n");
    }
    return 0;
}