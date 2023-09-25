#include<stdio.h>

int main(){
	float temp;
	printf("Enter the temp in degree C: ");
	scanf("%f",&temp);
	float res = 9.0/5*temp + 32.0;
	printf("TEMP CONVERT\nTemp in degree C : %.2f\nTemp in degree F : %.2f\n",temp,res);
	return 0;
}
