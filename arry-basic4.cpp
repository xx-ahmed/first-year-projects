#include <iostream>
using namespace std;
void arrry(int arr[2][2]) {
	for (int a = 0; a < 2; a++) {
		for (int s = 0; s < 2; s++) {
			cout << arr[a][s] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int arr[2][2] = {
		{2,3},
		{5,6}
	};
	arrry(arr);
}
