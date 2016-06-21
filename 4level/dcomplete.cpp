#include<stdio.h>
int main()
{
	int N;
	int sum;
	scanf("%d",&N);
	for(int num = 1; num <= N; num++)
	{
		sum = 0;
		for(int div=1; div <num; div++)
			if( num%div == 0)
				sum += div;
		if( sum == num )
			printf("%d\n",num);
	}
	return 0;
}
