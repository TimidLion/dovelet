#include<iostream>
using namespace std;
int main()
{
	char words[5][15];
	for(int j = 0; j < 5; j++)
	{
		for(int k = 0; k < 15; k++)
			words[j][k] = 0;
	}

	for(int i = 0; i < 5; i++)
	{
		cin >> words[i];
	}

	for(int w = 0; w != 15 ; w++)
	{
		for(int l = 0; l < 5; l++)
		{
			if( words[l][w] == 0 )
				continue;
			cout << words[l][w];
		}
	}
}
