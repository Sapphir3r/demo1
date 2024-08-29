
#include <iostream> // cin & cout
#include <conio.h> // lets u use getch
using namespace std;
int main() {

	//cout << "\"Hello World!\"" "\n\n Enter a interger";
	//
	//int age = 30;
	//float balance = 2243.43f;
	//const double PI = 3.14159265;
	//bool coryIsCool = true;
	//char middleIntial = 'd';
	////string s = "Cory"; // not a primitive

	//int a = (int)PI; // expilicit cast

	//int input = 0;
	//cin >> input;
	//cout << "You entered: " << input<<" \n";

	//if (input != 0) {
	//	cout << "your number is over 3!";
	//}

	//while (input) {
	//	input--;
	//}
	int input = 0;
	cout << "Enter a number 1-5. ";

	cin >> input;
	
	if (input < 1 || input>5) {
		cout << "number is out of range please enter a number 1-5.\n";
	}
	else {
		for (int i = 0; i < input; i++) 
		{
			cout << i + 1 << ". If I\'m not back in five mintues, just wait longer.\n";
		}
		cout << "\t-Ace Ventura";
	}
	
	

	

	(void)_getch(); // wait for any key
	return 0;

}
