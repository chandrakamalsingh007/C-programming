#include<stdio.h>
int sum(int n);
int main(){
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    
    while(>9){
        
    }
    printf("The sum of %d until the sum becomes single digit is %d",sum(n));
    return 0;

}
int sum(int n){
   if(n==0)
   return 0;
    else
    
    return n%10+sum(n/10);
    
}