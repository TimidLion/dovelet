#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long long k;
	cin >> k;
	unsigned long long luckynum;
	for(int i = 0; i < k; i++)
	{
		if( i%2 == 0 )
			luckynum = 4*pow(10.0,i);
		else
			luckynum = 7*pow(10.0,i/2);
	}
}
