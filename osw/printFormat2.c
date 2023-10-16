#include<stdio.h>
void p_cal(char *str){
	printf("Year= %s\n",&str[7])
	int c = 2023,yy;
	sscanf(&str[7],"%d",&yy);
	int age = c - yy;
	switch(age){
		case 0 ... 30:
			printf("Pay 10000\n");
			break;
		case 31 ... 50:
			printf("Pay 20000\n");
			break;
		case 51 ... 200:
			printf("Pay 30000\n");
			break;
	}
}
int main(){
	char str[30];
	printf("Enter the DOB: ");
	scanf("%s",str);
	
	int a,b,c;
	sscanf(str,"%d-%d-%d",&a,&b,&c);
	char v1[12][4]= {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	
	sprintf(str,"%02d-%s-%d",a,v1[b-1],c);
	printf("%s\n",str);
	return 0;
}
