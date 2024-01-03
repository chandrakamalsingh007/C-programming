//N,N-1,N-2,.....,1,2,3,..N
#include<stdio.h>
#include<math.h>

int main(){
    int i,n,x,b;
    x=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<=2*n;i++){
        b=n-x;
        printf("%d\t",abs(b));
        x++;
    }
    return 0;
}