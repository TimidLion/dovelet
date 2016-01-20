#include<cstdio>
int main()
{
	int son_num;
	scanf("%d",&son_num);
	int zegop;
	scanf("%d",&zegop);
	int* son_spirit = new int[son_num];
	for(int z=0; z < son_num; z++)
		scanf("%d",&son_spirit[z]);
	int sum = 0;
	//Do calculation
	for(int i=0; i < son_num; i++)
	{
		int this_son =1;
		for(int n=0; n<zegop;n++)
			this_son *=son_spirit[i];
		if(sum < sum + this_son)
			sum += this_son;
	}
	printf("%d\n",sum);
}
