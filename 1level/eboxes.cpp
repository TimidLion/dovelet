#include<iostream>
using namespace std;
int main()
{
	int N,K,T,F;
	cin >> N >> K >> T >> F;
	int x = (F-N)/(K-1);
	cout << K*x+N << endl;
}
