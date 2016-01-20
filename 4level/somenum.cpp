#include<cstdio>
int main()
{
	bool is_somenum;
	for(int n=1; n < 10000; n++)
	{
		is_somenum = true;
		for(int d=1; d*d < n; d++)
		{
			if(n%d != 0)
			{
				is_somenum = false;
				break;
			}
		}
		if(is_somenum)
			printf("%d\n",n);
	}
}
