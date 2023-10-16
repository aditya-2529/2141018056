#include<stdio.h>
void prin(int *p,int m,int n){
	for(int i = 0 ; i < m;i++){
		for(int j = 0 ; j < n;j++) //printf("%d ",p[i][j]);
			printf("%d ",*(p+(i*n)+j));
		//p+(i*n)+j
		//p+(i*n)+(j*o)+k
		printf("\n");
	}
}
void mul(int *p,int *p1,int *r,int m,int n,int m1,int n1){
	//int res[m][n1];
   
	for(int i = 0 ; i < m;i++){
		for(int j = 0 ; j < n1;j++){//printf("%d ",p[i][j]);
			//res[i][j]=0;
			*(r+(i*n1)+j) = 0;
		     for (int k = 0; k < n1; k++) {
		        *(r+(i*n1)+j) += (*(p+(i*n)+k) * *(p1+(k*n1)+j));//*(r+(i*n1)+j)
		     }
         }
	}
}

int main(){
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int arr1[m][n];
	for(int i = 0 ; i < m;i++){
		for(int j = 0 ; j < n;j++) scanf("%d",&arr1[i][j]);
	}
	printf("Matrix 1\n");
	prin(&arr1[0][0],m,n);
	int l,k;
	scanf("%d",&l);
	scanf("%d",&k);
	int arr2[l][k];
	for(int i = 0 ; i < l;i++){
		for(int j = 0 ; j < k;j++) scanf("%d",&arr2[i][j]);
	}
	printf("Matrix 2\n");
	prin(&arr2[0][0],l,k);
	int res[m][k];
	mul(&arr1[0][0],&arr2[0][0],&res[0][0],m,n,l,k);.
	printf("Multiplication of matrix 1 and matrix 2\n");
	prin(&res[0][0],m,k);
	return 0;
}
