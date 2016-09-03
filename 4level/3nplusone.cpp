#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if( b < a){ int tmp = a; a = b; b = tmp; }
	int longestLen = 0;
	for(int num=a; num <= b; num++)
	{
		int len = 1;
		int i = num;
		while(i != 1)
		{
			if(i%2 == 0)
				i /= 2;
			else
				i = 3*i+1;
			len++;
		}
		if(len > longestLen)	longestLen = len;
	}
	printf("%d\n",longestLen);
}
