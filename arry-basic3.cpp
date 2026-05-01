#include <iostream>
using namespace std;
int main()
{
	int arr[2][3][4] = {

		{
		{2,3,4,4},
		{4,5,6,2},
		{4,5,6,7}
},
		{
		{3,5,3,2},
	    {3,7,8,5},
	    {5,6,7,8}
		} 
	};
	for (int a = 0; a < 2; a++) {
		for (int s = 0; s < 3; s++) {
			for (int d = 0; d < 4; d++) {
				cout << arr[a][s][d] << " ";
			
			}
			cout << endl;
	}
	}
}
