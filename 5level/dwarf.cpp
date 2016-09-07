#include<stdio.h>

int main()
{
	int arr[9];
	for(int i =0; i < 9; i++)
		scanf("%d",&arr[i]);
	int sum = 0;
	for(int i =0; i < 9; i++)
		sum += arr[i];
	int num1,num2;
	for(int pick = 0; pick < 8; pick++)
	{
		for(int pick2 = pick+1; pick2 < 9; pick2++)
		{
			int sum2 = sum;
			sum2 -= (arr[pick] + arr[pick2]);
			if(sum2 == 100)
			{	num1 = pick; num2 = pick2;break;	}
		}
	}
	for(int i=0; i < 9; i++)
		if(i != num1 && i != num2)
			printf("%d\n",arr[i]);
}
