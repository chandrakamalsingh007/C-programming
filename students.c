#include<stdio.h>

int main(){
    struct student{
        char name[30],dpmnt[20];
        float marks;
        int roll;
    }s[48];
    int n;
    printf("Enter the no. of students:");
    scanf("%d",&n);
    printf("Enter the information of students:");
    int i;
    for(i=0;i<n;i++){
        printf("\nEnter name:");
        scanf("%s",&s[i].name);
        printf("\nEnter the department:");
        scanf("%s",&s[i].dpmnt);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
        printf("Enter roll no:");
        scanf("%d",&s[i].roll);
    }
    printf("\nName\t\tDepartment\t\tMarks\t\tRoll No.\n");
    for(i=0;i<n;i++)
    {
        if(s[i].dpmnt=="Electronics"&&s[i].marks>300);
        {
            printf("%s\t\t%s\t\t%0.2f\t\t%d\n",s[i].name,s[i].dpmnt,s[i].marks,s[i].roll);
        }
    }
    return 0;

}