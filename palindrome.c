#include<stdio.h>

int main(){
    long num,n,rev=0,digit;
    printf("Enter n:");
    scanf("%ld",&n);
    num=n;

    do{
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }while(n!=0);
    if(num==rev){
        printf("The number is palindrome :");
    }else{
        printf("not");
    }
    return 0;
}