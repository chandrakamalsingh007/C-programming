#include<stdio.h>

int main(){
    int a,b,n1,n2,temp,hcf1,rem,hcf2,lcm;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    a=n1;
    b=n2;
    if(n1<n2){
        temp=n1;
        n1=n2;
        n2=temp;

    }

    for(int i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
            hcf1=i;
        }
    }
    do{
        rem=n1%n2;
        n1=n2;
        hcf2=n2;
        n2=rem;


    }while(rem!=0);
    if(hcf1==hcf2){
        printf("The Hcf of n1 and n2 is %d\n",hcf1);
    }
    lcm=(a*b)/hcf1;
    printf("The LCM of n1 and n2 is %d",lcm);
    return 0;
}