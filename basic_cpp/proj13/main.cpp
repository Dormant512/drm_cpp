#include <iostream>
#include <cmath>

using namespace std;


class Student {
	public:
		string name;
		string major;
		double gpa;

		Student(string aName, string aMajor, double aGpa) {
			name = aName;
			major = aMajor;
			gpa = aGpa;
		}

		bool hasHonors() {
			if (gpa >= 3.5) {
				return true;
			} else {
				return false;
			}
		}
};


int main() {

	Student student1("Jim", "Business", 2.4);
	Student student2("Pam", "Art", 3.6);

	cout << "Jim honors: " << student1.hasHonors() << endl;
	cout << "Pam honors: " << student2.hasHonors() << endl;

	return 0;

}
