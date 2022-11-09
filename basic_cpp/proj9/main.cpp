#include <iostream>
#include <cmath>

using namespace std;


int power(int baseNum, int powNum) {
	int ans = 1;

	for (int i = 0; i < powNum; i++) {
		ans *= baseNum;
	}

	return ans;
}


int main() {

	// for loops
	int nums[] = {1, 2, 5, 7, 3};
	for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
		cout << nums[i];
	}

	cout << endl;

	cout << power(2, 9) << endl;

	return 0;

}
