#include<stdio.h>

void swap(int *a ,int *b){
	int t =*a;
	*a=*b;
	*b=t;
	//printf("%d %d\n",a,b);
}

int* addS(int *a,int *b){
	*a = *a+*b;
	return a;
}

int fact(int *a){
	if(*a==1) return 1;
	else {
		int p = *a-1;
		return fact(&p) * *a;
	}
}

int main(){
	int n,m;
	printf("Enter a number: ");
	scanf("%d",&n);
	//printf("Enter a number: ");
	//scanf("%d",&m);
	//int *res = addS(&n,&m);
	int res = fact(&n);
	printf("Factorial is: %d\n",res);
	//printf("%d %d\n",n,m);
	//swap(&n,&m);
	//printf("%d %d\n",n,m);
	/*char a = '5';
	printf("Value %c\n",a);
	printf("Size %ld\n",sizeof(a));
	printf("Address %p\n",&a);
	char *p = &a;
	printf("Value %p\n",p);
	printf("Size %ld\n",sizeof(p));
	printf("Address %p\n",&p);
	printf("Value %c\n",*p);
	*p = 'C';
	printf("Value %c\n",a);
	printf("Value %c\n",*p);*/
	
	return 0;
}
