#include<iostream>
using namespace std;
int main()
{
	unsigned long long N;
	cin >> N;
	unsigned long long ans = 3*(N*N+2*N-1)/2-6;
	cout << fixed << ans << endl;
}
