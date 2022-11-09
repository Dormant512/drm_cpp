#include <iostream>
#include <cmath>

using namespace std;


int main() {

	// defining a matrix
	int matrix[3][2] = {
		{1, 2},
		{4, 6},
		{7, 9}
	};

	/*
	cout << matrix[0][1] << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Element (" << i << ", " << j << ") = " << matrix[i][j] << endl;
		}
	}
	*/
	
	cout << "Matrix:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	return 0;

}
