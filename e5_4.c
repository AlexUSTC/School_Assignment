#include <stdio.h>

int main()
{
	float a,b,c,d,e,y;
	
	printf("Input a b c d e\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	printf("y=%10.6f\n",y=a*b/(c+d/e));
}
