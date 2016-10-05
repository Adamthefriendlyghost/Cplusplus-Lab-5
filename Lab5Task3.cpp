//AverageHeight
#include <iostream>

using namespace std;

int averageHeight(int x, int y) {

	if ((x > 0) && (y > 0)) {

		int total = 0;
		total = ((x + y)/2);
		return total;

	}
	else {
		cout << "Invalid Value";
	}
}





void main() {

	int input1 = 0;
	int input2 = 0;
	int returned = 0;

	cout << "Please enter height one: ";
	cin >> input1;
	cout << "Please enter height two: ";
	cin >> input2;

	returned = averageHeight(input1, input2);
	cout << "Output " << returned << endl;

}