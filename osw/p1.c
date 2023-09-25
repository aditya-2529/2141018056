#include <stdio.h>

int main(){
	float mark = 0;char grade;
	printf("Enter the mark: ");
	scanf("%f",&mark);
	printf("Enter the Grade: ");
	scanf(" %c",&grade);
	/*if(grade=='O') {
		mark = mark + 10;
		printf("%f\n",mark);
	}
	else if(grade=='A') {
		mark = mark + 9;
		printf("%f\n",mark);
	}
	else if(grade=='B') {
		mark = mark + 8;
		printf("%f\n",mark);
	}
	else printf("Error\n");*/
	switch(grade){
		case 'O':
			mark = mark + 10;
			break;
		case 'A':
			mark = mark + 9;
			break;
		case 'B':
			mark = mark + 8;
			break;
		default:
			printf("Wrong Choice\n");
			break;
	}
	printf("%f\n",mark);
	return(0);
}
