#include<stdio.h>

int main(){
	int n;
	printf("Enter the richer scale number: ");
	scanf("%d",&n);
	/*if(n<5.0) printf("Little or no damage.");
	else if(5.0>=n&&n<5.5) printf("Some damage.");
	else if(5.5>n&&n<6.5) printf("Serious damage; walls may crack.");
	else if(6.5>=n&&n<7.5) printf("Disaster: houses and buildings may collapse.");
	else printf("Catastrophe: most buildings destroyed.");*/
	switch(10*n){
		case 0 ... 49:
			printf("Little or no damage.\n");
			break;
		case 50 ... 54:
			printf("Some damage.\n");
			break;
		case 55 ... 64:
			printf("Serious damage; walls may crack.\n");
			break;
		case 65 ... 74:
			printf("Disaster: houses and buildings may collapse.\n");
			break;
		default:
			printf("Catastrophe: most buildings destroyed.\n");
			break;
	}
	return 0;
}
