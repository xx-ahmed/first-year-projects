#include <iostream>
using namespace std;
int main()
{
	const int length = 100;
	int degree[length] = {1,2,3,5};
	for (int n = 0; n < length; n++) {
		if (n == 2){
			cout << 5 << endl;
		}
		else 
		cout << degree[n] << endl;
	}
	return 0;
}
