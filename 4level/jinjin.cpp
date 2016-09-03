#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int mostSadDay=0,mostSadness = 8;
	for(int i=0; i < N; i++)
	{
		int normalClassT,afterClassT;
		scanf("%d %d",&normalClassT,&afterClassT);
		int non_happy = normalClassT + afterClassT;
		if(mostSadness < non_happy)
		{
			mostSadDay = i+1;
			mostSadness = non_happy;
		}
	}
	printf("%d\n",mostSadDay);
}
