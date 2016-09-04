#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int longestLen = 0;
	for(int i =0; i <=n; i++)
	{
		int next = i;
		int now = n;
		int len = 1;
		while(next >= 0)
		{
			int tmp = now-next;
			now = next;
			next = tmp;
			len++;
		}
		if( len > longestLen)
			longestLen = len;
	}
	printf("%d\n",longestLen);
}
