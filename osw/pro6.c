#include<stdio.h>

int main(){
	float sub1,sub2,sub3;
	char sec1,sec2,sec3;
	int roll1,roll2,roll3;
	scanf("%f",&sub1);
	scanf(" %c",&sec1);
	scanf("%d",&roll1);
	scanf("%f",&sub2);
	scanf(" %c",&sec2);
	scanf("%d",&roll2);
	scanf("%f",&sub3);
	scanf(" %c",&sec3);
	scanf("%d",&roll3);
	printf("Sub1: %f\nSec1: %c\nRoll1: %d\nSub2: %f\nSec2: %c\nRoll2: %d\nSub3: %f\nSec3: %c\nRoll3: %d\nAverage:  %f\n",sub1,sec1,roll1,sub2,sec2,roll2,sub3,sec3,roll3,sub1+sub2+sub3/3.0);
	return 0;
}
