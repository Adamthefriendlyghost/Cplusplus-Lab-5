//Highest 10

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

int highest4(int one, int two, int three, int four, int five, int six, int seven, int eight, int nine, int ten) {

	return higher(ten, higher(nine, higher(eight, higher(seven, higher(six, higher(five, higher(four, higher(three, higher(one, two)))))))));

}

int main() {

	int first = 0; int second = 0; int third = 0; int fourth = 0; int fifth = 0; int sixth = 0; int seventh = 0; int eigth = 0; int nineth = 0; int tenth = 0; int larger = 0;
	cout << "Enter the first score" << endl;
	cin >> first;

	cout << "Enter the second score" << endl;
	cin >> second;

	cout << "Enter the third score" << endl;
	cin >> third;

	cout << "Enter the fourth score" << endl;
	cin >> fourth;

	cout << "Enter the fifth score" << endl;
	cin >> fifth;

	cout << "Enter the sixth score" << endl;
	cin >> sixth;

	cout << "Enter the seventh score" << endl;
	cin >> seventh;

	cout << "Enter the eigth score" << endl;
	cin >> eigth;

	cout << "Enter the nineth score" << endl;
	cin >> nineth;

	cout << "Enter the tenth score" << endl;
	cin >> tenth;

	larger = highest4(first, second, third, fourth, fifth, sixth, seventh, eigth, nineth, tenth);
	cout << "The higher score is " << larger;
}

