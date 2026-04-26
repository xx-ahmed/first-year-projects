#include <iostream>
using namespace std;
int calculateArea(int x, int y) {
	return x * y;
}
int calculatePerimeter(int x, int y) {
	return 2 * (x + y);
}
int main() {
	int a, b, area, perimeter;

	cout << " enter  length  : ";
	cin >> a;
	cout << " enter width  : ";
	cin >> b;

	area = calculateArea(a,b);
	perimeter = calculatePerimeter(a, b);

		cout << " the area is :" << area << endl;
		cout << " the perimeter is :" << perimeter << endl;
		return 0;
}





