//High Program

#include <iostream>
using namespace std;

int higher(int x, int y)
{
	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int highest4(int one, int two, int three, int four) {
	
	return higher(four, higher(three, higher(one, two)));
	
}

int main() {

	int first = 0; int second = 0; int third = 0; int fourth = 0; int larger = 0;
	cout << "Enter the first score" << endl;
	cin >> first;

	cout << "Enter the second score" << endl;
	cin >> second;

	cout << "Enter the third score" << endl;
	cin >> third;

	cout << "Enter the fourth score" << endl;
	cin >> fourth;

	larger = highest4(first, second, third, fourth);
	cout << "The higher score is " << larger;
}

