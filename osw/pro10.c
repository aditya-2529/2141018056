#include<stdio.h>
#include<math.h>

float interest(float a,float b,float c,float d){
	
	float payment = (a*(c-d))/(1-pow((1+a),-b));
	return payment;
}

int main(){
	float car_price,time_period,interst_rate,down;
	printf("the car’s purchase price: ");
	scanf("%f",&car_price);
	printf("the monthly interest rate: ");
	scanf("%f",&interst_rate);
	printf("the time period over: ");
	scanf("%f",&time_period);
	printf("the down payment: ");
	scanf("%f",&down);
	float p = interest(interst_rate/1200.0,time_period,car_price,down);
	printf("Amount borrowed: %.2f\nThe payment is: $%.2f\n",car_price-down,p);
	return 0;
}
