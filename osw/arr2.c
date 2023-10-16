#include<stdio.h>

void get_corners(float *a,float *b,int n){
	for(int i = 0;i < n;i++){
		scanf("%f",&a[i]);
		scanf("%f",&b[i]);
	}
}
void output_corners(float *a,float *b,int n){
	for(int i = 0;i < n;i++){
		printf("%.2f %.2f\n",a[i],b[i]);
	}
}
float get_Area(float *a,float *b,int n){
	float area = 0;
	if(a[0]!=a[n-1]) printf("Not possible");
	else{
		for(int i = 0; i < n-2;i++)
			area = area+ (a[i+1]+a[i]) * (b[i+1]-b[i]);
		area = 0.5*area;
		if (area<0) area = -1*area;
	}
	return area;
}

int main(){
	
	int n;
	scanf("%d",&n);
	float x[n];
	float y[n];
	get_corners(x,y,n);
	output_corners(x,y,n);
	float res = get_Area(x,y,n);
	printf("Area is: %.2f\n",res);
	return 0;
}
