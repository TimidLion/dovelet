#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i3 = 0; i3 <= N/3; i3++)
	{
		for(int i5 = 0; i5 <= N/5; i5++)
		{
			if(i5*5+i3*3 == N)
			{
				cout << i5+i3 << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
