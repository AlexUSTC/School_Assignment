#include <stdio.h>

int main()
{
	int a=12;
	printf("ans1=%d\n",a+=a);
	
	a=12;
	printf("ans2=%d\n",a*=2+3);
	
	a=12;
	printf("ans3=%d\n",a/=a+a);
	
	a=12;
	printf("ans4=%d\n",a+=a-=a*=a);
}
