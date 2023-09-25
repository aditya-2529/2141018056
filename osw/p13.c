#include<stdio.h>

int main(){
	int n;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	printf("%d\n",n);
	for(int i = 0; i < n;i++){
		int a,sum=0;
		for(int z = 0;z <= 2; z++){
			scanf("%d",&a);
			sum = sum + a;
		}
		printf("Percentage is: %.2f\n",(sum/150.0)*100);
	}
	return 0;
}
