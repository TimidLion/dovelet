#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double r;
	int n;
	cin >> r >> n;
	double angle = double(360)/n;
	angle *= M_PI/180;
	double S = r*r*(sin(angle)/2)*n;
	cout << fixed << setprecision(3) << S << endl;
}
