#include<iostream>
using namespace std;
int main()
{
	unsigned long int W,L;
	cin >> W >> L;
	//Do the GCD by for loop
	long int a,b;
	if(W > L)
	{	a = W; b = L;	}
	else
	{	a = L; b = W;	}

	while(b != 0)
	{
		long int r = a%b;
		a = b;
		b = r;
	}
	unsigned long long ans = (W/a)*(L/a);
	cout << ans << endl;
}
