#include<stdio.h>
#include<math.h>

int main(){
	int t = 50;
	double pi = 0.0;
	for(int i = 0 , i < t , i++){
		double n = 1.0/(2*i+1);
		if(i%2==1) t=-t;
		pi += n;
	}
	pi *= 4;
	printf("Approx of PI using %d terms: %lf\n",t,pi);
	return 0;
}
