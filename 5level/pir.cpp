#include<stdio.h>

int main()
{
	int arr[20];
	int sum = 0,num1,num2;
	for(int i =0; i < 20; i++)
		scanf("%d",&arr[i]);
	for(int j =0; j < 20; j++)
	{
		for(int i =0; i < 20; i++)
		{
			if(i == j)continue;
			if(arr[i] + arr[j] > sum)
			{
				sum = arr[i] + arr[j];
				num1 = arr[i];
				num2 = arr[j];
			}
		}
	}
	printf("%d\n%d %d\n",sum,num1,num2);
}
