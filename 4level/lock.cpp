#include<stdio.h>
int main()
{
	int marking;
	int key[3];
	int degree;
	scanf("%d %d %d %d",&marking,key,key+1,key+2);
	printf("scan done?\n");
	while(1)
	{
		degree = 0;
		if(!marking&&!key[0]&&!key[1]&&!key[2])
			break;
		printf("%d ",marking);
		for(;marking != key[0]; marking--)
		{
			if( marking < 0 )
				marking += 40;
			degree++;
		}
		printf("%d ", marking);
		for(;marking != key[1]; marking++)
		{
			degree++;
			if( marking >= 40 )
				marking -= 40; 
		}
		printf("%d ", marking);
		for(;marking != key[2]; marking--)
		{
			degree++;	
			if( marking < 0 )
				marking += 40;
		}
		int answer = 360*3+9*degree;
		printf("%d\n",answer);
		printf("baba");
		scanf("%d %d %d %d",&marking,key,key+1,key+2);
	}
}
