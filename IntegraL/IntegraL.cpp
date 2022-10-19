#include <stdio.h>
#include <iostream>
#include <math.h>
#include "IntegraL.h"

using namespace std;

IntegraL I;
double h = 0.000001;
double x1 = -2.0;
double x2 = 2.0;
double S = 0.0;
double i = 0;
int X1, X2;
double x;

double f(double x) {
	return (1 / (pow(x, 2) + 4.0));
}
double f1(double x, double y) {
	return (1 / (pow(x*y, 2) + 5.0));
}



int main() {
	cout << I.Trapize(h, x1, x2) << endl;
	cout << I.Right(h, x1, x2) << endl;
	cout << I.Left(h, x1, x2) << endl;
	cout << I.Mid(h, x1, x2) << endl;
	cout << I.Simp(h, x1, x2) << endl;
	cout << I.Katess2(h, x1, x2) << endl;
	//cout << I.Rng1() << endl;
	return 0;
};
