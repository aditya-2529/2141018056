#include<stdio.h>
#include<string.h>
int main(){
	/*char str[20] = "OSW Class";
	char str1[30];
	//strcpy(str1,str)
	char *p = strcpy(str1,str);
	printf("Original String is: %s\n",str);	
	printf("Copied String is: %s\n",str1);
	printf("Return String is: %s\n",p);
	//strlen - input is char *
	// output is int(consider)
	char name[10] = "Aditya";
	printf("Length of the string: %d\n",strlen(name));*/
	
	
	char message[20];
	char name1[20];
	scanf("%[^\n]s",message);
	scanf(" %[^\n]s",name1);
	int s1,s2,s3;
	s1 = strlen(message);
	s2 = strlen(name1);
	s3 = s1+s2+2;
	if(strcmp(message,name1)==0) printf("match");
	else printf("Mismatch");
	
	
	
	/*
	strcat(message," ");
	strcat(message,name1);
	*/
	
	
	
	/*
	char m[s3];
	strcpy(m,message);
	m[s1] = ' ';
	strcpy(&m[s1+1],name1);
	*/
	
	/*for(int i = 0; i < s1;i++) m[i] = message[i];
	m[s1] = ' ';
	for(int i = 0; i < s2;i++) m[s1+i+1] = name1[i];
	m[s3-1] = '\0';*/
	//printf("Final String is %s\n",message);
	
	
}
