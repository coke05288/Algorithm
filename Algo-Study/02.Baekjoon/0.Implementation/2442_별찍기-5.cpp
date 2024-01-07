#include<iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n - 1; j++) {
			if (j == n - i) {
				for (int k = 0; k < i * 2 - 1; k++) {
					cout << "*";
				}
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}


	return 0;
}