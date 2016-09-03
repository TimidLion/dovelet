#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int num = 0;
	while(n != 0)
	{
		n /= m;
		num += n;
	}
	printf("%d\n",num);
}
