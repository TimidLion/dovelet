#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int w,h;
	cin >> w >> h;
	int tile_8,tile_other;
	tile_8 = (w/8)*(h/8);
	tile_other = ceil(0.1*(w%8))*(h/8)+ceil(0.1*(h%8))*(w/8)+ceil(0.1*(w%8))*ceil(0.1*(h%8));
	cout << "The number of whole tiles is " << tile_8 << " part tiles is " << tile_other << endl;
}
