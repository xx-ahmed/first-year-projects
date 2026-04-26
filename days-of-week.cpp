#include <iostream>
using namespace std;
void dayy(int &day) {
	cout << " enter a day : ";
	cin >> day;
	switch (day) {
	case 1: cout << "saturday" << endl; break;
	case 2: cout << "sunday" << endl; break;
	case 3: cout << "monday" << endl; break;
	case 4: cout << "tuesday" << endl; break;
	case 5: cout << "wednesday" << endl; break;
	case 6: cout << "thursday" << endl; break;
	case 7: cout << " friday"<<endl; break;
	default: cout << "invalid day";
	}
}
int main() {
	int day;
	dayy(day);
	return 0;
}
