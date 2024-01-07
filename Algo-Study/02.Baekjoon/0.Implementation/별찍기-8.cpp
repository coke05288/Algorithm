#include<iostream>
using namespace std;

int main() {

	int N; 

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2; j++) {
			if (j < i + 1 || j >= (N * 2 - 1) - i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = N; i > 1; i--) {
		for (int j = 0; j < N * 2; j++) {
			if (j < i - 1 || j >= (N * 2 + 1) - i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}	

	return 0;
}