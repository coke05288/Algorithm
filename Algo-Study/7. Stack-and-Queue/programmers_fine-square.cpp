#include <iostream>
using namespace std;

int gcd(int w, int h) {
	int gcd_num;
	while (h != 0) {
		gcd_num = w % h;
		w = h;
		h = gcd_num;
	}
	return w;
}

long long solution(int w, int h) {
	long long answer = 1;
	long long gcd_num = gcd(w, h);

	// long long을 해준 이유.
	long long W = w;
	long long H = h;

	return (W * H) - (W + H - gcd_num);
}

int main(void) {

	cout << solution(8, 12) << endl;

	return 0;
}