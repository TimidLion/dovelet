#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int bunza, bunmo, zari;
	cin >> bunza >> bunmo >> zari;
	long double ration = ((long double)bunza/(long double)bunmo)*pow(10.0,zari);
	ration = floor(ration)/pow(10.0,zari);
	cout << fixed << setprecision(zari) << ration << endl;
}
