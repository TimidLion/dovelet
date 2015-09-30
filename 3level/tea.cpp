#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int min = 0;
	if(n%2 == 0)
	{
		for(int i = n/2-1; i > 0 ; i--)
			min += i;
		cout << 2*min << endl;
	}
	else
	{
		for(int j = n/2; j > 0 ; j--)
			min += j;
		cout << 2*min-(n/2) << endl;
	}
}
