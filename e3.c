#include <stdio.h>

int main()
{
	int a=3,b=4,c=5,x,y;
	
	printf("ans1=%d\n",b>c&&b==c);
	printf("ans2=%d\n",!(a>b)&&!c||1);
	printf("ans3=%d\n",!(x=a)&&(y=b)&&0);
	printf("ans4=%d\n",!(a+b)+c-1&&b+c/2);
}
