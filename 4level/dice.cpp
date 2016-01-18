#include<cstdio>
int main()
{
	int N;
	scanf("%d",&N);
	for(int i =1; i <= 6; i++)
		for(int j = 1; j <=6; j++)
			if(i+j == N)
				printf("%d %d\n",i,j);
	return 0;
}
