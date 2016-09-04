#include<stdio.h>
int main()
{
	int n = 1,u,d;
	while(1)
	{
		scanf("%d %d %d",&n,&u,&d);
		if(n == 0)	break;
		int snale = 0;
		int time = 0;
		while( snale < n)
		{
			if(time %2 == 0)
				snale += u;
			else
				snale -= d;
			time++;	
		}
		printf("%d\n",time);
	}
}
