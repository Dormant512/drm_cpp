#include <iostream>
#include <cmath>

using namespace std;


int main()
{

	bool isMale = true;
	bool isTall = false;

	if (isMale && isTall) // && and || or
	{
		cout << "tall M" << endl;
	}
	else if(isMale && !isTall) // ! not
	{
		cout << "short M" << endl;
	}
	else 
	{
		cout << "not M" << endl;
	}

	return 0;

}
