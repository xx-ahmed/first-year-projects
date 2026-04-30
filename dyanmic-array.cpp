#include <iostream>
using namespace std;
int main()
{
	int length;
	cout <<"enter length : ";
	cin>>length;

	int* numbers = new int[length];
	for (int n = 0; n < length; n++) {
		numbers[n] = n + 1;
	}

	for (int n = 0; n < length; n++) {
		cout << numbers[n] << " ";
	}
	cout << endl;
	delete[] numbers;
	return 0;
}

