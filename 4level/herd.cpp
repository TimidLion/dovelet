#include<stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int way = 0;
	for(int i =1; i <= N; i++)
	{
		int sum = 0;
		int add = i;
		while(sum < N)
		{
			sum += add;
			add++;
		}
		if( sum == N )
			way++;	
	}
	printf("%d\n",way);
}
