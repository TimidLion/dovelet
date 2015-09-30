#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.14159
using namespace std;
int main()
{
	double a,b;
	cin >> a >> b;
	double curve = 2*PI*a/2+2*PI*b/2;
	double line = sqrt(a*a+a*a) + sqrt(b*b+b*b);
	cout << fixed << setprecision(3) << curve+line << endl;
}
