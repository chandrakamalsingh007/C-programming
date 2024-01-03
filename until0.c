#include<stdio.h>

int main(){
    int n,sum=0,count=0;
    float average;
    system("cls");
    
    do{
        printf("Enter n:");
        scanf("%d",&n);
            sum=sum+n;
            count++;
    }while(n!=0);
    average=sum/(count-1);
    printf("The average of the sum of entered digit is %.2f",average);
    return 0;

}