#include<stdio.h>

int prime(int n);
int flag=0;
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    prime(num);
    return 0;
    
}

int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0||n==1){
        printf("The number is prime");

    }else{
        printf("The number is not prime");
    }

}