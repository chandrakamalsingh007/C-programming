#include<stdio.h>

int main(){
    long int n;
    int sum,rem;
    printf("Enter n:");
    scanf("%ld",&n);
    while(n>9){
        sum=0;
        while(n>0){
            rem=n%10;
            sum+=rem;
            n=n/10;
        }
        n=sum;
    }
    printf("The sum is %d",sum);
    return 0;
    
    
}