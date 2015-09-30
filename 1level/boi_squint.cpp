#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long long n;
	cin >> n;
	cout << fixed << (unsigned long long)ceil(sqrt(n)) << endl;
}
