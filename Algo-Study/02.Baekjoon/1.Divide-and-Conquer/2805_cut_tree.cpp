#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long n;
long long want;
vector<long long> n_arr;

bool D(long long x) {
	long long temp_res = 0;

	for (auto t : n_arr) {
		if (t > x) {
			temp_res += t - x;
		}
	}
	if (temp_res >= want) return true;
	else return false;
}

int main() {

	cin >> n >> want;

	int highest = -1;

	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		n_arr.push_back(temp);
		if (temp > highest) highest = temp;
	}

	
	long long low(1);
	long long high = highest;
	long long res = 0;

	while (low <= high) {
		long long mid = (low + high) / 2;

		// 가능하더라도 더 좋은 값이 있는지를 찾아주어야함.
		if (D(mid)) {
			res = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	cout << res << endl;

	return 0;
}