#include <iostream>

using namespace std;

//Programul functioneaza doar cu baze de la 2 la 10

int main() {
	long a, nr1 = 0, nr2=0, k = 1, b, c;
	cout << "Introduceti baza initiala: ";
	cin >> b;
	cout << "Introduceti numarul in baza " << b << ": ";
	cin >> a;
	cout << "Introduceti baza in care sa fie transformat numarul: ";
	cin >> c;
	while (a) {
		if (a / 10 != 0 || a % 10 != 0) {
			nr1 = (a % 10) * k + nr1;
		}
		k = k * b;
		a = a / 10;
	}
	k = 1;
	while (nr1) {
		if (nr1 / c != 0 || nr1 % c != 0) {
			nr2 = (nr1 % c) * k + nr2;
		}
		k = k * 10;
		nr1 = nr1 / c;
	}
	cout << "Numarul convertit din baza " << b << " in baza " << c << " este: ";
	cout << nr2;
	return 0;
}