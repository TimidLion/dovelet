#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double sum = 0;
	for(int i= 0; i < 12; i++)
	{
		cout << i << endl;
		double month;
		cin >> month;
		sum += month;
	}
	cout << fixed << setprecision(2) "$" << sum/12 << endl;
}
