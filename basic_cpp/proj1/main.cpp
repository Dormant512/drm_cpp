#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool isDead = false;

	// string methods
	string comment = "Good Stuff OOo";
	char grade = 'A';
	comment[0] = 'M';
	string commentSub = comment.substr(5, 7);

	cout << comment.find('o', 5) << endl;
	cout << commentSub << endl;

	// numeric methods
	int age = 50;
	double gpa = 2.3; // more decimal places than float
	age++;

	cout << 10 % 3 << endl;
	cout << age / gpa << endl;

	cout << pow(age / 3, 4) << endl; // integer back
	cout << sqrt(age / 3) << endl; // sqrt makes double back
	cout << round(4.1) << ceil(4.1) << floor(4.8) << endl;
	cout << fmax(3, 10.0) << " " << fmin(3, -20.1) << endl;

	// user input
	// int userAge;
	// cout << "Enter your age: ";
	// cin >> userAge;

	// cout << "You entered " << userAge << " years" << endl;

	// to get string - different commands
	string userName;
	cout << "Enter your name: ";
	getline(cin, userName);
	
	cout << "You entered " << userName << endl;

	return 0;
}
