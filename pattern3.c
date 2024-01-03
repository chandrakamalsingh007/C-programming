#include<stdio.h>

int main(){

    int i,j,k;
    char A[]="pulchowk";
    for(i=8;i>=0;i--){
        for(j=0;j<i;j++){
            printf(" ");

        }
        for(k=j;k<=8;k++){
            printf("%c",A[k]);
        }
        printf("\n");
    }
    return 0;
}