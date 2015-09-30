#include<iostream>
using namespace std;
int main()
{
	int k,L;
	cin >> k;
	for(int L =2 ; L < k ; L++)
	{
		if(k%L == 2)
		{
			cout << L << endl;
			return 0;
		}
	}
}
