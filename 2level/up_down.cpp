#include<iosream>
using namespace std;
int main()
{
	int a,b,c,d,s;
	cin >> a >> b >> c >> d >> s;
	int a_r = s%(a+b);
	int b_r = s%(c+d);
	if( a_r == b_r)
		cout << "Tied" << endl;
	else if( a_r 
}
