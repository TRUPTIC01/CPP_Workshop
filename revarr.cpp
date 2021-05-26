#include <iostream>

using namespace std;

int main() {
	int arr[10], rev[10];
	int index = 0;

	cout << "Enter array's elements :" << endl;

	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	for (int i = 9; i >= 0; i--) {
		rev[i] = arr[index++];
	}

	cout << "\nRev array is ";
	for (int i = 0; i < 10; i++)
		cout << rev[i] << "\t";

	return 0;
}
