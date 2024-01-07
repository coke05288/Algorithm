#include<iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {

	int a, b = 0;

	cin >> a >> b;

	// Àç±Í·Î Çª´Â ¹æ¹ý
	int answer = a > b ? gcd(a, b) : gcd(b, a);

	cout << answer << " " << a * b / answer;


	return 0;
}