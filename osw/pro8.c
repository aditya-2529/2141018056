#include<stdio.h>

int main(){
	printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
	printf("Enter beginning odometer reading=> ");
	float beg_odo,end_odo;
	scanf("%f",&beg_odo);
	printf("Enter ending odometer reading=> ");
	scanf("%f",&end_odo);
	float dis = end_odo - beg_odo,res = 0.35 * dis;
	printf("You traveled %.2f miles.At $0.35 per mile,your reimbursement is $%.2f.\n",dis,res);
}
