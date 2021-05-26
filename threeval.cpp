// Program to find largest and smallest of three numbers

#include <iostream>

using namespace std;

int largest(int, int, int);
int smallest(int, int, int);

int main() {
	int a, b, c, large, small;
	
	cout << "Enter three numbers : " << endl;
	cin >> a >> b >> c;

	large = largest(a, b, c);
	small = smallest(a, b, c);

	cout << "\nLargest " << large << "\nSmallest " << small << endl;
	
	return 0;
}

int largest(int a, int b, int c) {
	if (a > b)
		if (a > c)
			return a;
		else
			return c;
	else if (b > c)
		return b;
	else
		return c;
}

int smallest(int a, int b, int c) {
	int temp = a < b ? a : b;
	return c < temp ? c : temp;
}
