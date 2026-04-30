#include <iostream>
using namespace std;
int main()
{
	const int rows = 2;
	const int columns = 2;
	string degree[rows][columns] = {
	{"ahmed","ali"},
	{ "anas","ahmed"}
	};
	for (int n = 0; n <rows ; n++) {
		for (int s = 0; s < columns; s++) {
			cout << degree[n][s] << endl;
		}
	}
	return 0;
}

