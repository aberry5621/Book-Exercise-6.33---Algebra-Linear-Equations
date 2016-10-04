// runme.cpp
// coder: alex
// purpose: to run quick code tests

#include<iostream>
using namespace std;

void solve_equation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& is_solvable)
{

	double adbc = 0.0;

	adbc = a * d - b * c;

	// O
	if (adbc == 0) {
		is_solvable = false;
	}
	else {
		// apply cramers rvle
		x = (e * d - b * f) / adbc;
		y = (a * f - e * c) / adbc;
	}

}

int main() {

	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double d = 0.0;
	double e = 0.0;
	double f = 0.0;
	double x = 0.0;
	double y = 0.0;
	bool is_solvable;

	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	solve_equation(a, b, c, d, e, f, x, y, is_solvable);

	if (is_solvable == false) {
		cout << "The equation has no solution" << endl;
	}
	else {
		cout << "x is " << x << " and y is " << y << endl;
	}

	return 0;

}
