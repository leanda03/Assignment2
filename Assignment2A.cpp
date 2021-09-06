// Assignment 2A

#include <iostream>
using namespace std;

int main() {
	int numSeconds;

	cout << "How much time has passed (in seconds)?: ";
	cin >> numSeconds;

	cout << "Now converting..." << endl;

	cout << numSeconds << " seconds is " << numSeconds / 3600 << " hour(s), " << (numSeconds / 60) % 60 << " minute(s), and " << numSeconds % 60 << " second(s).";

	return 0;
}