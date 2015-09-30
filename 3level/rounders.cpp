#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cin >> x;
	bool is_big = false;
	int i = 0;
	while(!is_big)
	{
		if(x <= pow(10.0,i))
			break;
		i++;
	}
	int banolim = (x*pow(0.1,i-1)+0.5);
	double dap = banolim*pow(10.0,i-1);
	cout << int(dap) << endl;
}
