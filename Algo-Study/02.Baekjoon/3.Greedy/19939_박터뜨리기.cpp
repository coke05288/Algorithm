#include<iostream>
using namespace std;

int main() {
	int n, k;

	cin >> n >> k;

	int check_sum = 0;

	for (int i = 1; i <= k; i++) {
		check_sum += i;
	}

	int check = n - check_sum;

	if (check < 0) {
		cout << -1;
	}
	else {
		if (check % k == 0) {
			cout << k-1;
		}
		else if (check % k != 0) {
			cout << k;
		}
	}

	return 0;
}