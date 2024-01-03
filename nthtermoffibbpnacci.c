#include<stdio.h>

int fibo(int n);
void prime(int n);
int flag=0;

int main(){

    int num,fib;
    printf("Enter a number:");
    scanf("%d",&num);
    fib=fibo(num);
    printf("%dth fibonacci term is  of %d\n",num,fib);
    prime(fib);
    return 0;
}

int fibo(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
void prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0||n==1){
        printf("The nth term of fibonacci series is prime");
    }else{
        printf("not prime.");
    }
}