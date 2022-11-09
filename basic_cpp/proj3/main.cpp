#include <iostream>
#include <cmath>

using namespace std;


// function definitions without return
// one may declare a func and define it later
void sayHi(string name, int age);


int main()
{

	// array definition
	int luckyNums[20] = {4, 8, 15, 16, 23, 42, 43};
	luckyNums[10] = 19;

	cout << luckyNums[10] << endl;

	sayHi("Mike", 21); // call function

	return 0;

}


void sayHi(string name, int age)
{

	cout << "Hello " << name << " (" << age << " y.o.)" << endl;

}
