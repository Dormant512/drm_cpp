#include <iostream>

using namespace std;


class Chef {
	public:
		string title = "The chef";
		void makeChicken() {
			cout << title << " makes chicken" << endl;
		}

		void makeSalad() {
			cout << title << " makes salad" << endl;
		}

		void makeSpecialDish() {
			cout << title << " makes BBQ ribs" << endl;
		}
};


class ItalianChef: public Chef {
	public:
		string title = "The italian chef";
		void makePasta() {
			cout << title << " makes pasta" << endl;
		}
		void makeSpecialDish() {
			cout << title << " makes lasagna" << endl;
		}

};


int main() {

	Chef chef;
	chef.makeChicken();

	ItalianChef italianChef;
	italianChef.makeChicken();
	italianChef.makePasta();

	chef.makeSpecialDish();
	italianChef.makeSpecialDish();

	return 0;

}
