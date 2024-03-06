#include "Divizor.h"

Divizor::Divizor() {
	d = 0;
	x = 0;
	y = 0;
}

Divizor::Divizor(Divizor& div) {
	d = div.d;
	x = div.x;
	y = div.y;
}

Divizor::Divizor(int D, int X, int Y) {
	d = D;
	x = X;
	y = Y;
}

int Divizor::Cmmdc(int a, int b) {
	int r = a % b;
	while (r) {
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}

Divizor Divizor::EuclidExtins(int a, int b) {
	Divizor A(a, 1, 0);
	Divizor B(b, 0, 1);
	Divizor R(0, 0, 0);

	int aux;

	while (B.d) {
		aux = A.d / B.d;
		R.d = A.d - aux * B.d;
		R.x = A.x - aux * B.x;
		R.y = A.y - aux * B.y;
		A = B;
		B = R;
	}
	return A;
}

ostream& operator<<(ostream& out, const Divizor& div) {
	out << "X" << div.d << " = " << "(" << div.x << ", " << div.y << ").";
	return out;
}

int main()
{
	int a, b, r;
	Divizor A;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	r = A.Cmmdc(a, b);
	cout << "Cmmdc este: " << r;
	A = A.EuclidExtins(a, b);
	cout << endl; 
	cout << A;
	return 0;
}