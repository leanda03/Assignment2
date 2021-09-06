// Assignment 2C

#include <iostream>
using namespace std;

int main() {
	double dollars;

	cout << "Welcome to Bisonica!" << endl;

	cout << "How many US Dollars do you have? ";
	cin >> dollars;

	cout << dollars << " US Dollar(s) is " << dollars * 0.73 << " British Pound(s),\nwhich is " << (dollars * 0.73) / 5 << " Bison Dollar(s)!";

	return 0;
}