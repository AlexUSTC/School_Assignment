#include <math.h>
#include <stdio.h>
main(){
	double a,b,c,p,d,x1,x2;
	a=1.0; b=-(1.0e+12+1.0); c=1.0e+12;
	printf("b=%18.10f\n",b);
	p=sqrt(b*b-4.0*a*c);
	printf("p=%18.10f\n",p);
	d=2.0*a;
	x1=(-b+p)/d;
	x2=(-b-p)/d;
	printf("x1=%e\nx2=%e\n",x1,x2);
}
