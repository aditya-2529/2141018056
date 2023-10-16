#include<stdio.h>

int main(){
	//char str[20] = {'m','e','r','t','y','r','t','\n','\0','e','r','t','j','k','a','S','F','V','X','M'};
	//char str[20] = "Hello\n";
	//printf("%c\n",str[0]);
	//printf("%s\n",str);
	char a[30];
	char b[30];
	char c[30];
	scanf("%[^\n]c",a);
	scanf(" %[^\n]c",b);
	scanf(" %[^\n]c",c);
	printf("%s %s %s\n",a,b,c);
	return 0;
}
