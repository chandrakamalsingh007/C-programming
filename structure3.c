#include<stdio.h>
struct person{
    char name[50],address[50];
    float salary;

}p[5];

void update(struct person p[]);

int main(){
    int i;
    struct person p[5];
    
    for(i=0;i<5;i++){
        printf("Enter the details of person[%d]:",i);
        printf("Name\t\tSalary\t\tAddress:\n");
        scanf("%s%f%s",&p[i].name,&p[i].salary,&p[i].address);
        printf("\n");
    }
    update(p);
    printf("update information:");
    for(i=0;i<5;i++){
        printf("%s \t %.2f\t %s",p[i].name,p[i].salary,p[i].address);
        printf("\n");
    }
    return 0;

}

void update(struct person p[]){
    for(int i=0;i<5;i++){
        p[i].salary=p[i].salary+0.15*p[i].salary;
    }
}