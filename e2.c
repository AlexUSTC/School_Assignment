#include <stdio.h>

int main()
{
	int a,b;
	float x,y;
	
	printf("ans1=%f\n",3.5+1/2+56%10);
	
	a=2;
	printf("ans2=%d\n",(a++*1/3));
	
	x=2.5;
	y=4.7;
	a=7;
	printf("ans3=%f\n",x+a%3*(int)(x+y)%2/4);
	
	b=3;
	a=2;
	x=3.5;
	y=2.5;
	printf("ans4=%f\n",(float)(a+b)/2+(int)x%(int)y);
	
	a=3;
	b=4;
	printf("ans5=%d\n",a=(a=++b,a+5,a/5));
	
	a=4;
	b=3;
	printf("ans6=%d\n",(a>=y>=2)?1:0);
}
