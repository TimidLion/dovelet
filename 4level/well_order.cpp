#include<cstdio>
int main()
{
	for(int i3=1;i3<=9;i3++)
		for(int i2=0;i2<=9;i2++)
			for(int i1=0;i1<=9;i1++)
				if(i3 < i2 && i2 < i1)
					printf("%d%d%d ",i3,i2,i1);
}
