#include<stdio.h>
#include<stdlib.h>

int main(){
    struct customer{
        int n;
        char name[20],add[20],phone[10];

    };
    struct customer c;
    FILE *fptr;
    fptr=fopen("records.txt","a+b");
    if(fptr==NULL){
        printf("The file does not exist.");
        exit(0);

    }
    int i=0,j=0;
    char ch;
    while(fread(&c,sizeof(c),1,fptr)==1){
        i++;
    }
    do{
        printf("Enter the name of customer:\t");
        gets(c.name);
        printf("Enter the address:\t");
        gets(c.add);
        printf("Enter the phone no:\t");
        gets(c.phone);
        fwrite(&c,sizeof(c),1,fptr);
        printf("Do you want to continue??Press Y or y if yes:\t");
        fflush(stdin);
        ch=getchar();
        i++;
    }
    while(ch=='y'|| ch=='Y');
        rewind(fptr);
        printf("The number of records is %d",i+j);
        printf("Name of the customer\t\tAddress\t\tPhone no.\n");
        while(fread(&c,sizeof(c),1,fptr)==1){
            printf("%s\t\t%s\t\t%s",c.name,c.add,c.phone);
        }
    


    return 0;
}