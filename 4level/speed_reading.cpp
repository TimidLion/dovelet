#include<stdio.h>

int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	for(int i =0; i < K; i++)
	{
		int Si,Ti,Ri;
		scanf("%d %d %d",&Si, &Ti, &Ri);
		int page = 0;
		int time = 0;
		while(page < N)
		{
			page += Si;
			time++;
			if(page >= N)
				break;
			if(time%Ti == j)
				time +=Ri;
		}
		printf("%d\n",time);
	}
}
