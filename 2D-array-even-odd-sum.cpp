#include <iostream>
using namespace std;

 void sumevenold(int arr1[2][3],int rows, int columns) {
	 int sumeven = 0; int sumodd = 0;
	 for (int a = 0; a < rows; a++) {
		 for (int s = 0; s < columns; s++) {
			 if (arr1[a][s]  % 2 == 0) {
				 sumeven += arr1[a][s];
			 }
			 else
				 sumodd += arr1[a][s];
		 }
	 }
	 cout << "even number :" << sumeven << endl;
	 cout << "odd number : " << sumodd << endl;

}
int main()
{
	int arr2[2][3] = {
		{ 2 ,3 ,5},
		{6 ,7 ,8}
	};
	sumevenold(arr2,2,3);

	return 0;
}
