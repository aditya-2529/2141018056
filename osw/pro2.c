#include<stdio.h>

int main(){
	char abc;
	abc = '5';
	printf("Address of abc : %p\n",&abc);
	printf("Size of abc : %d\n",sizeof(abc));
	printf("Value of abc : %c\n",abc);
	return 0;
}
