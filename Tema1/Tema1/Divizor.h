#pragma once
#include <iostream>
using namespace std;

class Divizor {
	int d;
	int x, y;
public:
	Divizor();
	Divizor(Divizor&);
	Divizor(int D, int X, int Y); 
	int Cmmdc(int a, int b);
	Divizor EuclidExtins(int a, int b);
	friend ostream& operator<< (ostream&, const Divizor&);
};