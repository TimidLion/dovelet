#include<iostream>
using namespace std;
int main()
{
	int S,x,y,dx,dy;
	cin >> S >> x >> y >> dx >> dy;
	for(int d = 0; x+d*dx < S || y+d*dy < S ; d++)
	{
		if((x+d*dx+y+d*dy)%2 == 1)
		{
			cout << "After 3 jumps the flea lands at (" << x+d*dx << ", " << y+d*dy << ")." << endl;
			return 0;
		}
	}
	cout << "The flea cannot escape from black squares." << endl;
}
