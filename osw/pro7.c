#include<stdio.h>

int main(){
	int a = 1000,b = 20, c = 13450,d,e,f;
	printf("%5d\n%5d\n%5d\n",a,b,c);
	a = 1,b = 12,c = 564;
	printf("%d\n%d\n%d\n",a,b,c);
	a = 1,b = 9,c = 56,d = 32,e = 892,f = 534;
	printf("%-3d%3d\n%-3d%3d\n%-3d%3d\n",a,b,c,d,e,f);
	float v=12.345,x=169.166,z=5469.333;
	printf("%8.3f\n%8.3f\n%8.3f\n",v,x,z);
	int g = sizeof(double);
	printf("%d\n",g);
	double l = 0.7;
	printf("%d\n",0.7 == l);
	printf("%c\n",(char)65);
	float ab = 4.0,bc = 2.0,lc = 1.0,ans = bc*bc-4*ab*lc;
	printf("%f\n",ans);
	return 0;
}
