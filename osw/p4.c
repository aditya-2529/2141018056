#include<stdio.h>

int main(){
	//int a = 1;
	int percentage = 0;
	/*while(a<=100){
		if(a%2==0) printf("%d\n",a);
		a=a+1;
	}*/
	/*do{
		a=a+2;
		printf("%d\n",a);
	}while(a<100);*/
	
	/*printf("Enter a number: ");
	scanf("%d",&a);
	while(a!=0){
		rem = a%2;
		a = a/2;
		res = res + rem*i;
		i = i*10;
	}
	printf("%d\n",res);*/
	/*while(a<=100){
		int i = 2,res = 0;
		while(i<=a/2){
			if(a%i==0){
				res++;
				break;
			}
			i++;
		}
		if(res==0&&a!=1) printf("%d is a prime number.\n",a);
		a++;
	}*/
	int no,res = 0,abc=0;
	printf("Enter the number of students: ");
	scanf("%d",&no);
	while(no!=0){
		while(abc<3){
			int mark;
			res=0;
			printf("Enter the number Mark: ");
			scanf("%d",&mark);
			res = res + mark;
			abc++;
		}
		no=no-1;
	}
	percentage = res / no;
	printf("%d\n",percentage*100);
	return 0;
}
