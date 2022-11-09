#include <iostream>
#include <cmath>

using namespace std;


double cube(double num)
{
	return pow(num, 3.0);
}


int main()
{

	double answer = cube(5.0);
	cout << answer << endl;

	return 0;

}
