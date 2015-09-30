#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a,b,x,l;
	cin >> a >> b >> x >> l;
	double time = double(l)/(a+b);
	cout << fixed << setprecision(6) << time*x << endl;
}
