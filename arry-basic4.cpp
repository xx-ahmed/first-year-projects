#include <iostream>
using namespace std;

int arrry(int arr[2][2], int size) {
	int sum = 0;
	for (int a = 0; a < 2; a++) {
		for (int s = 0; s < 2; s++) {
			sum += arr[a][s] * arr[a][s];
		}	
	}
	return sum;
}
int main()
{
	int arr[2][2] = {
		{3,5 },
		{4,5}
	};
	int size = 5;
	int result = arrry(arr,size);
		cout << " the sum is " << result << endl;	
}
