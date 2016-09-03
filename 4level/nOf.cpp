#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int num = 0;
	for(int f =n; f >= 1; f--)
	{
		int i = f;
		while(i%m == 0)
		{
			i = i/m;
			num++;
		}
	}
	printf("%d\n",num);
}
