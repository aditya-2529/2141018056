#include<stdio.h>
int sum(int n){
	if(n==1) return 1;
	else return n+sum(n-1);
}
void mess(int n){
	if(n==0) return;
	else mess(n-1);
	printf("Aditya ranjan\n");
}
int gcd(int a,int b){
	if(b!=0) return gcd(b,a%b);
	else return a;
}
int lcm(int a,int b,int mul){
	if(a%b == 0) return mul/b;
	else return lcm(b,a%b,mul);
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int s = 0;
	/*for(int i = 1 ; i <= n ;i++){
		sum += i;
	}
	printf("Sum is: %d\n",sum);*/
	s = sum(n);
	printf("%d\n",s);
	mess(20);
	int a = gcd(5,15);
	printf("%d\n",a);
	int ab = lcm(5,15,5*15);
	printf("%d\n",ab);
	return 0;
}


