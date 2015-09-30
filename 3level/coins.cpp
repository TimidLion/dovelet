#include<iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cin >> n;
		if(n == 0)
			break;
		else if(n%2 == 0)
			cout << "No Solution!" << endl;
		else
			cout << n-1 << endl;
	}while(n != 0);
}
