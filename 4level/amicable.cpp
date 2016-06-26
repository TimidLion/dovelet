#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 2;i <= n; i++)
	{
		int sum = 0;
		for(int d=1;d < i; d++)
		{
			if(i%d == 0)
				sum += d;
		}
		int sumOfSum = 0;
		for(int j = 1; j < sum; j++)
		{
			if(sum%j == 0)
				sumOfSum += j;
		}
		if(sumOfSum == i)
		{
			if(sum == sumOfSum)
				continue;
//		printf("i : %d\n",i);
//		printf("sum : %d\n",sum);
//		printf("sum of sum : %d\n",sumOfSum);
			if(sum > i)
				printf("%d %d\n",i,sum);
			else
				printf("%d %d\n",sum,i);
			i = sum;
		}
	}
}
