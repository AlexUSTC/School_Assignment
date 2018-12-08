#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main()
{
	double R=0;
	double H=0;
	double V=0;
	printf("输入 R,H \n");
	scanf("%lf,%lf",&R,&H);
	V=PI*R*R*H;
	printf("圆柱体体积为 V=%6.2lf \n",V);
	return 0;
}
