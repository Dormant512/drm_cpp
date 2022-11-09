#include <iostream>
#include <cmath>

using namespace std;


class Book {
	public:
		string title;
		string author;
		int    pages;

		Book() {
			title = "no title";
			author = "no author";
			pages = 0;
		}

		Book(string aTitle, string aAuthor, int aPages) {
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}
};


int main() {

	Book book1("Placeholder book", "Me", 420);
	Book book2("Placeholder booklet", "You", 69);
	Book book3;

	cout << book1.pages;
	cout << book2.pages << endl;
	cout << book3.author << endl;

	return 0;

}
