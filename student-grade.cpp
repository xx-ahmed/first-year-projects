
#include <iostream>
using namespace std;
int main() {
	int grade ;
	cout << "enter your grade:";
	cin >> grade;

	if (cin.fail()) {
		cout << " enter a vaild num ! " << endl;

	} else if (grade > 100 || grade < 0) {
		cout << " inter a vailed num ! " << endl;
	}
		else if (grade >= 90 ){
		cout << "A+" << endl;
	} else if (grade >= 80){
		cout << "B+" << endl;
	} else if (grade >= 70){
		cout << "C+" << endl;
	} else if (grade >= 60){
		cout << "D+" << endl;
	} else if (grade >= 50) {
			cout << "D" << endl;
	}
	else if (grade <= 49) {
		cout << "F" << endl;
	}		
	return 0;
}
