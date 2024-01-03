#include<stdio.h>

int main(){
    int n,i=0,j;
    int a,b,c;
     printf("Enter the number of people:");
    scanf("%d",&n);

    int age[n];
   while(i<n){
        printf("Enter the age of person%d:",i+1);
        scanf("%d",&age[i]);
        i++;
    }
    for(i=0;i<n;i++){
    if(age[i] %2==0){
        printf("Even:");
        printf("%d\t",age[i]);
    }else{
        printf("odd:");
        printf("%d\t",age[i]);   
    }
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(age[i]<age[j]){
               a=age[i];  
            }
        }
        
    }
    printf("\n%d is minimum age",a);
    
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(age[i]>age[j]){
         b=age[i];
                
            }
        }
    }
   printf("\n%d is maximum age",b);
    int sum=0;
    float avg;
   
    for(i=0;i<n;i++){
        sum=sum+age[i];
    }
    avg=(sum/n);
    printf("\nThe average of age is:%.2f",avg);
    return 0;
}