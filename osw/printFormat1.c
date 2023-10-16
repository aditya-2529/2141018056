#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	char str[30];
	sprintf(str,"%dx 2 + %d x",a,b);
	printf("%s\n",str);
	return 0;
}
