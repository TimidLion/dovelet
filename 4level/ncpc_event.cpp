#include<stdio.h>

int main()
{
	int personNum, budget, hotels,weeks;
	scanf("%d %d %d %d",&personNum,&budget,&hotels,&weeks);
	int* payment = new int[weeks];
	for(int i=0; i < weeks; i++)
		payment[i] = 0;
	for(int i =0; i < hotels; i++)
	{
		int fee;
		scanf("%d",&fee);
		for(int j = 0; j <  weeks; j++)
		{
			int number;
			scanf("%d",&number);
			if(number >= personNum && payment[j] == 0)
				payment[j] = fee;
			else if(number >= personNum && payment[j] > fee)
				payment[j] = fee;
		}
	}
	int sum = 0;
	for(int i =0; i < weeks; i++)
	{
		if(payment[i] == 0)
		{
			printf("stay home\n");
			return 0;
		}
		sum += payment[i];
	}
	if(sum > budget)
	{	printf("stay home\n"); return 0;	}
	printf("%d\n",sum);
}
