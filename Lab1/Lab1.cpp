#include <iostream>
using namespace std;

int main() {
	cout << "numbers input:" << endl;

	double a, b;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "a + b = " << a + b << endl;
	cout << "a * b = " << a * b << endl;

	cout << "pair (a, b)" << endl;

	cout << "a - b = " << a - b << endl;
	if (b != 0) {
		cout << "a / b = " << a / b << endl;
	}
	else {
		cout << "b = 0, divide by 0 attempt" << endl;
	}

	cout << "pair (b, a)" << endl;

	cout << "b - a = " << b - a << endl;

	if (a != 0) {
		cout << "b / a = " << b / a << endl;
	}
	else {
		cout << "a = 0, divide by 0 attempt" << endl;
	}

	return 0;
}