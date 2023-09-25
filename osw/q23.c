#include<stdio.h>
#include<math.h>

int main(){
	float n,temp,ivol,fvol,inc;
	float a = 3.592*pow(10,6),b = 0.0427*pow(10,3),r=0.08206*pow(10,3);
	printf("The number of moles of carbon dioxide: ");
	scanf("%f",&n);
	printf("The absolute temperature: ");
	scanf("%f",&temp);
	printf("The initial volume in milliliters: ");
	scanf("%f",&ivol);
	printf("The final volume: ");
	scanf("%f",&fvol);
	printf("The increment volume between lines of the table: ");
	scanf("%f",&inc);
	printf("Volume\t\t\tPressure\n");
	for(float i = ivol; i <= fvol; i=i+inc){
		float v = i;
		float pressure = ((n*r*temp)/(v-b*n))-((a*n*n)/(v*v));
		printf("%f\t\t%f\n",i,pressure);
	}
	return 0;
}
