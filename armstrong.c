#include<stdio.h>
#include<math.h>
☻
int main(){
    int n,sum=0,rem,digit=0,org;
    scanf("%d",&n);
    org=n;
    do{
        n=n/10;
        digit++;
    }while(n!=0);
    
    n=org;
    do{
        rem=n%10;
        sum=sum+pow(rem,(digit-1));
        n=n/10;
    }while(n!=0);
    if(sum==org){
        printf("The number is armstrong");

    }else{
        printf("The number is not armstrong");
    }

    return 0;
}