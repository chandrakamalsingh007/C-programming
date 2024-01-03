#include<stdio.h>
#include<conio.h>

int main(){
	int age[100];
	int i,n,min,max;
	int Even_Sum=0,Odd_Sum=0;
	float sum=0.0,avg;
	printf("Enter the no of people:");
	scanf("%d",&n);
	i=0;
	while(i<n){
		printf("Age of Person %d :",i+1);
		scanf("%d",&age[i]);
		
		i++;
	}
	
	for(i=0;i<n;i++){
		if(age[i]%2==0){
			Even_Sum+=age[i];
		}
		else{
			Odd_Sum+=age[i];
		}
	}
	printf("\nThe sum of Even numbers of age in this Array = %d",Even_Sum);
	printf("\nThe sum of Odd numbers of age in this Array = %d",Odd_Sum);
	
	min=max=age[0];
	for(i=1;i<n;i++){
		if(min>age[i])
		min=age[i];
		if(max<age[i])
		max=age[i];
	}
	printf("\nminimum age is : %d",min);
	printf("\nmaximum age is : %d",max);
	
	for(i=0;i<n;i++){
		sum+=age[i];
}
	avg=sum/n;
	printf("\nThe average of given ages is : %.2f",avg);
	return 0;
	
}
