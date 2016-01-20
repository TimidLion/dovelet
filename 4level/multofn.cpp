#include<cstdio>
int main()
{
	int n;
	scanf("%d",&n);
	int num = 0;
	for(int i1=1; i1<=3; i1++)
	for(int i2=1;i2<=3;i2++)
	for(int i3=1;i3<=3;i3++)
	for(int i4=1;i4<=3;i4++)
		if((i1*1000+i2*100+i3*10+i4)%n == 0)
			num++;
	printf("%d\n",num);
}
