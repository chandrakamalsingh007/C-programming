#include<stdio.h>

int main(){
    int n,i,flag;
    flag=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag == 0 || n==1){
        printf("The number is prime.");
    }else{
        printf("The number is not prime.");
    }
    return 0;
}