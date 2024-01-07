#include<iostream>
using namespace std;

int main() {
	int n;

	cin >> n;
	
	while (n > 0) {
		int A, B;

		cin >> A >> B;

		cout << A + B << endl;

		n--;
	}
}