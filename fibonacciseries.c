#include<stdio.h>

int main(){
    int n,first=0,second=1,next,i;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("\t%d",next);
    }
    return 0;
}