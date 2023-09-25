#include<stdio.h>

int main(){
	/*float BMI,wt_lb,ht_in;
	printf("Enter the weight in pounds: ")
	scanf("%f",&wt_lb);
	printf("Enter the weight in pounds: ")
	scanf("%f",&ht_in);*/
	float mark;
	char grade;
	scanf("%f",&mark);
	switch((int)mark){
		case 90 ... 100:
			grade = 'O';
			break;
		case 80 ... 89:
			grade = 'A';
			break;
		case 70 ... 79:
			grade = 'B';
			break;
		default:
			printf("Invalid\n");
			break;
	}
	printf("%c\n",grade);
	
	return 0;
}
