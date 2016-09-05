#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	int area = n*n*n;
	int i,j,k;
	for(int a =1; a <= n; a++)
		for(int b = 1; b <= n; b++)
			for(int c = 1; c <= n; c++)
				if(n == a*b*c)
					if(2*(a*b+b*c+a*c) < area)
					{
						area = 2*(a*b+b*c+a*c);
						i = a; j = b; k = c;
					}
	printf("%d %d %d\n",i,j,k);
}
