#include<stdio.h>
#include<string.h>
int main(){
	int c = 0;
	char mess1[100];
	int n = scanf("%s",mess1);
	while(n!=-1){
		if(strcmp(mess1,"am")==0) c = c+1;
		n = scanf(" %s",mess1);
	}
	printf("Count of am is: %d\n",c);
}
