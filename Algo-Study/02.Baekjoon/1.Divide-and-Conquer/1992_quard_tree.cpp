#include<iostream>
#include<vector>
using namespace std;

const int MAX_VALUE = 64;
int map[MAX_VALUE][MAX_VALUE];


void go(int y, int x, int n) {

	int first_value = map[y][x];
	bool check = false;

	for (int i = y; i < n + y; i++) {
		for (int j = x; j < n + x; j++) {
			if (map[i][j] != first_value) {
				check = true;
				break;
			}
		}
		if (check) break;
	}

	if (check) {
		cout << "(";
		go(y, x, n / 2);
		go(y, x + n / 2, n / 2);
		go(y + n / 2, x,  n / 2);
		go(y + n / 2, x + n / 2,  n / 2);
		cout << ")";
		return;
	}
	else {
		cout << first_value;
		return;
	}

}

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}

	go(0, 0, n);

	return 0;
}