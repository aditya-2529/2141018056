#include<stdio.h>
#include<string.h>

int main(int agrc,char *argv[]){
	/*char *token;
	token = strtok(argv[1],"\n");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL,"\n");	
	}*/
	char *line,*word,*rL,*rW;
	int c1 = 0,c2 = 0,c3 = 0;
	line = strtok_r(argv[1],"\n",&rL);
	while(line!=NULL)
	{
		c1++;
		word = strtok_r(line, " ",&rW);
		while(word != 0 ){
			c2++;
			c3 += strlen(word);
			word = strtok_r(NULL," ",&rW);
		}
		line = strtok_r(NULL,"\n",&rW);	
	}
	printf("Line Count: %d, Word Count: %d,Char count: %d\n",c1,c2,c3);
}	

//develop a program to determin the av  number of word per line as paragraph given as cmd arg
