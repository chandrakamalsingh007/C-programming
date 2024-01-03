#include<stdio.h>

int main(){
    int n,rev=0,digit,num;

    printf("Enter N:");
    scanf("%d",&n);
    num=n;

    do{
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }while(n!=0);
    printf("The reverse of %d is %d",num,rev);
    return 0;
}