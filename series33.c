#include<stdio.h>

int main(){
    char a[]="Programming"
    char ch=" ";
    int i,j,k;
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
          putchar(ch);  
        }
        for(k=1;k<=2*i-1;k--){
            putchar(a[k])
        }
    }
    return 0;
}