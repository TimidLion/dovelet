#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int z=1; z <= n*n; z++)
	{
		if(z*z%n == 0)
		{
			printf("%d\n",(z*z)/n);
			break;
		}
	}
}
