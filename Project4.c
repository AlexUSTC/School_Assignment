#include <stdio.h>
#include <math.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	double p=0;
	double s=0;
	printf("输入三角形边长 a,b,c \n");
	scanf("%d,%d,%d",&a,&b,&c);
	p=(a+b+c)/2;
	if(p-a>0&&p-b>0&&p-c>0)
	{
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("三角形面积为 %6.2lf \n",s);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
