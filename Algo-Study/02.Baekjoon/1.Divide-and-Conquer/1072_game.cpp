#include<iostream>
using namespace std;

long long x, y, z;

bool D(long long mid) {
	long long temp_z = 0;

	temp_z = (y + mid) * 100 / (x + mid);

	return z < temp_z;
}

int main(void) {

	cin >> x >> y;

	z = (y * 100) / x;

	long long low = 1;
	long long high = x;

	long long res = -1;

	while (low <= high) {
		long long mid = (low + high) / 2;

		if (D(mid)) {
			res = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	cout << res << endl;

	return 0;
}