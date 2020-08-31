#include<stdio.h>

int main()
{
	unsigned int num;
	int i;
	scanf("%u\n",&num);
	for(i=0;i<16;i++)
	{
		printf("%d\n",(num<<i & 1<<15)?1:0);
	}
	return 0;
}
