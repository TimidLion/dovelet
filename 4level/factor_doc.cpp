#include<stdio.h>
int* get_divisor(int);
int* get_prime_factor(int);
int get_divisor_nums(int);
int get_sum_of_divisor(int);

int main()
{
	int n;
	scanf("%d",&n);
	
	//divisors
	printf("Divisors : ");
	int* divisors = get_divisor(n);
	for(int i=0;i<get_divisor_nums(n);i++)
		printf("%d ",divisors[i]);
	printf("\n");
	printf("Divisor num : %d\n",get_divisor_nums(n));
	printf("Divisor sum : %d\n",get_sum_of_divisor(n));

	//prime factors
	printf("Prime factors : ");
	get_prime_factor(n);
	return 0;
}

int* get_divisor(int N)
{
	int num = get_divisor_nums(N);
	int* divisors = new int[num];
	int indx = 0;
	for(int i = 1;i*i <= N; i++)
	{
		if(N%i == 0)
		{
			divisors[indx] = i;
			if(i*i != N)
			{
				divisors[num-indx-1] = N/i;
			}
			indx++;
		}
	}
	return divisors;
}

int* get_prime_factor(int N)
{
	for(int i=2; i <= N; i++)
	{
		if(N == 1)
			break;
		if(N%i == 0)
		{
			N = N/i;
			printf("%d ",i);
			i--;
		}
	}
	printf("\n");
}

int get_divisor_nums(int N)
{
	int num = 0;
	for(int i=1; i <= N; i++)
		if(N%i == 0)
			num++;
	return num;
}

int get_sum_of_divisor(int N)
{
	int sum = 0;
	for(int i=1;i <= N;i++)
		if(N%i == 0)
			sum += i;
	return sum;
}
