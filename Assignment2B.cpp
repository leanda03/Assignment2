// Assignment 2B

#include <iostream>
using namespace std;

int main() {
	int x, y, width, height;

	cout << "Enter the hit box top-left X coordinate: ";
	cin >> x;

	cout << "Enter the hit box top-left Y coordinate: ";
	cin >> y;

	cout << "Enter the width of the hit box: ";
	cin >> width;

	cout << "Enter the height of the hit box: ";
	cin >> height;

	cout << "[Hit Box Coordinates]" << endl;

	cout << "Top-Left: " << x << ", " << y << endl;
	cout << "Bottom-Left: " << x << ", " << x << endl;
	cout << "Top-Right: " << width << ", " << height << endl;
	cout << "Bottom-Right: " << width << ", " << x << endl;

	return 0;
}