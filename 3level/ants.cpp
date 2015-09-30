#include<iostream>
using namespace std;
int main()
{
	int L,n;
	cin >> L >> n;
	int small, big;
	small = 0;
	big = 0;
	for(int i = 0; i < n; i++)
	{
		int x,left,right;
		cin >> x;
		if( x < L-x )
		{
			if(x > small)
				small = x;
			if(L-x > big)
				big = L-x;
		}
		else
		{
			if(L-x > small)
				small = L-x;
			if(x > big)
				big = x;
		}
	}
	cout << small << " " << big << endl;
}
