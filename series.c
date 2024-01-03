#include<stdio.h>
int term(int n);

int main(){
    int n;
    printf("Enter n terms:");
    scanf("%d",&n);
    
        printf("%d",term(n));
    
    return 0;

}

int term(int n){
    
    if(n==0){
        return 0;
    }
    else if(n==1){
        return n;
    }
    else{
        return n+term(n-1)*10;
    }
}