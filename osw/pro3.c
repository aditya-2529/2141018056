#include<stdio.h>

int main(){
	float temp;
	char sec;
	printf("Enter temp: ");
	scanf("%f",&temp);
	printf("Enter sec: ");
	scanf(" %c",&sec);
	printf("Age entered: %f\nsection is: %c\n",temp,sec);
	return 0;
}
