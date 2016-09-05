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
		int counter = 0;
		while(page < N)
		{
			page += Si;
			time++;
			counter++;
			if(page >= N)
				break;
			if(counter == Ti)
			{	counter = 0; time += Ri;	}
		}
		printf("%d\n",time);
	}
}
