#include<stdio.h>

int max(int *p){
	int max = *(p+0);
	for(int i = 1;i < 20;i++){
		if(max<*(p+i)) max = *(p+i);
	}
	
 	return max;
}

int main(){
	int arr[20];
	for(int i = 0;i < 20;i++)
		scanf("%d",&arr[i]);
	for(int i = 0;i < 20;i++)
		printf("%d ",arr[i]);
	printf("\n");
	int maxL = max(arr);
	printf("Max Value is: %d\n",maxL);
	return 0;
	
	
		
}
