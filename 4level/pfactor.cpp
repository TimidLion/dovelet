#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int m = 2;m <= n; m++)
	{
		if(n%m == 0)
		{
			n /= m;
			printf("%d ",m);
			m = 1;
		}
	}
	printf("\n");
}
