#include <iostream>

using namespace std;


class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};


class Employee : AbstractEmployee {
	private: // private locks to class only, subclasses cannot access
		string Company;
		int    Age;

	protected:
		string Name;

	public:
		Employee(string name, string company, int age) {
			Name = name;
			Company = company;
			Age = age;
		}

		void setName(string name) {
			Name = name;
		}
		
		string getName() {
			return Name;
		}
		
		void setCompany(string company) {
			Company = company;
		}
		
		string getCompany() {
			return Name;
		}

		void setAge(int age) {
			if (age >= 18) {
				Age = age;
			}
		}
		
		int getAge() {
			return Age;
		}

		void AskForPromotion() {
			if (Age > 30) {
				cout << Name << " got promoted." << endl;
			} else {
				cout << Name << ", sorry, no promotion." << endl;
			}
		}

		virtual void Work() {
			// virtual checks if derived classes have impementations of this
			// if yes, those would be used instead of this
			cout << Name << " is checking email, task backlog, performing tasks..." << endl;
		}

		void IntroduceYourself() {
			cout << "Name - " << Name << endl;
			cout << "Company - " << Company << endl;
			cout << "Age - " << Age << endl;
		}
};


class Developer : public Employee {
	public:
		string FavProgLang;

		Developer(string name, string company, int age, string favProgLang)
			:Employee(name, company, age) {
			FavProgLang = favProgLang;
		}

		void FixBug() {
			cout << Name << " fixed bug using " << FavProgLang << endl;
			// if Name was private, should use getName()
		}

		void Work() {
			cout << Name << " is writing " << FavProgLang << " code" << endl;
		}
};


class Teacher : public Employee {
	// keyword public lets child use private properties as if they were public
	public:
		string Subject;

		Teacher(string name, string company, int age, string subject)
			:Employee(name, company, age) {
			Subject=subject;
		}

		void PrepareLesson() {
			cout << Name << " is preparing " << Subject << " lesson" << endl;
		}

		void Work() {
			cout << Name << " is teaching " << Subject << endl;
		}
};


int main() {

	Developer d = Developer("Ildar", "VK", 22, "Kotlin");
	Teacher t = Teacher("Jack", "Cool School", 35, "History");

	Employee *e1 = &d;
	Employee *e2 = &t;

	e1->Work();
	e2->Work();

}
