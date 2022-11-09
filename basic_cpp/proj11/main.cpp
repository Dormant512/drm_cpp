#include <iostream>
#include <cmath>

using namespace std;


int main() {

	// pointers
	int age = 21;
	int *pAge = &age;

	double gpa = 2.7;
	double *pGpa = &gpa;

	string name = "Mike";
	string *pName = &name;

	cout << age << " is located at " << pAge << " deref " << *pAge << endl;
	cout << gpa << " is located at " << pGpa << " deref " << *pGpa << endl;
	cout << name << " is located at " << pName << " deref " << *pName << endl;

	return 0;

}
