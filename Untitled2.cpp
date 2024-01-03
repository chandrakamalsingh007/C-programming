#inlcude<stdio.h>
#include<conio.h>

int main(){
	char ch[100];
	int i;
	printf("Enter the line of text:");
	for(i=0;i<100;i++){
		scanf("%c",&ch[i])
	}
	for(i=0;i<100;i++){
		if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U'){
			printf("*");
		}
		else{
			printf("%c",ch[i]);
		}
	}
	return 0;
}
