#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float temperature;
	cin >> temperature;
	while(temperature != 999)
	{
		float temp;
		cin >> temp;
		if(temp == 999)
		{
			cout << "End of Output" << endl;
			break;
		}
		cout <<fixed << setprecision(2) <<  temp - temperature << endl;
		temperature = temp;
	}
	return 0;
}
