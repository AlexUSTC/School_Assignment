#include <stdio.h>
#include <math.h>
int main()
{
	double f=0;
	double c=0;
	printf("输入华氏温度 \n");
	scanf("%lf",&f);
	c=(f-32)*5/9;
	printf("摄氏温度为%6.2lf \n",c);
	return 0;
}
