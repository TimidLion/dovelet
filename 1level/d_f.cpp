#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double N;
	cin >> N;
	int n = floor(N);
	double alpha = N-n;
	cout << floor(N) << " " <<fixed << setprecision(2) << alpha << endl;
}
