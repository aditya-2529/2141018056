#include<stdio.h>
void natural(int a){
		if(a==0) return ;
		else natural(a-1);
		printf("%d\n",a);
}
int fib(int b){
	if(b==0) return 0;
	else if(b==1) return 1;
	else return fib(b-1)+fib(b-2);
}
int fact(int a){
	if(a==0) return 1;
	else return fact(a-1)*a;
}
int convert(int a){
	if(a==0) return 0;
	else return a % 2 + 10 * (convert(a/2));
}
int checkPrime(int a,int i){
	if(i==1) return 1;
	else{
		if(a%i==0) return 0;
		else return checkPrime(a,i-1);
	}
}
int main(){
	natural(10);
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i = 0; i < n;i++){
		int res = fib(i);
		printf("%d,",res);
	}
	printf("\n");
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	int resFact = fact(no);
	printf("%d\n",resFact);
	printf("Enter a number: ");
	scanf("%d",&no);
	int resBinary = convert(no);
	printf("%d\n",resBinary);
	printf("Enter a number: ");
	scanf("%d",&no);
	int check = checkPrime(no,no/2);
	if(check==1) printf("%d is a prime number.\n",no);
	else printf("%d is not a prime number.\n",no);
	return 0;
}
