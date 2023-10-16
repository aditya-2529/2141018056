#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	//printf("the size of arguments: %d\n",argc);
	//printf("the passed arguments:\n");
	//for(int i=1;i<argc;i++){
		/*int c = 0;
		char ab[30];
		int l=0;
		int n = sscanf(&(argv[1][l]),"%s",ab);
		l = strlen(ab)+1;
		while(l < strlen(argv[1])){
			if(strcmp(ab,argv[2])==0) c++;
			n = sscanf(&(argv[1][l]),"%s",ab);
			l += strlen(ab)+1;
		}
		printf("Token is: %d\n",c);*/
	//}
	
	char da[12][4] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	int dd,mm,yy;
	char *d,*m,*y;
	d = strtok(argv[1],"-");
	m = strtok(NULL,"-");
	y = strtok(NULL,"-");
	dd = atoi(d);
	mm = atoi(m);
	yy = atoi(y);
	printf("Month is : %s\n",da[mm-1]);
}


Write a C function that takes whether a string is substring of longer string. the function return -1 if it is not a substring otherwise it returns the locations of the substring
