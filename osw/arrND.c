#include<stdio.h>
void pri(int (*p)[3],int m,int n){
	for(int i = 0 ; i < m;i++){
		for(int j = 0 ; j < n;j++) printf("%d ",p[i][j]);//printf("%d ",*(*(p+i)+j));
		//p+(i*n)+j
		//p+(i*n)+(j*o)+k
		printf("\n");
	}
}
int main(){
	int arr[2][3];
	for(int i = 0 ; i < 2;i++){
		for(int j = 0 ; j < 3;j++) scanf("%d",&arr[i][j]);
	}
	pri(arr,2,3);
	return 0;
}

//There are two files mat1.txt and mat2.txt First row of each file represent the size of matrix rest of the row represent the elemets of thematrix write a pro with fun to multiply those matrix and print the result.
