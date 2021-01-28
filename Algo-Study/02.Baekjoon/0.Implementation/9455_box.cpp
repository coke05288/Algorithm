#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <math.h>
#include <tuple>
#include <typeinfo>

#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

using namespace std;

int main(void) {

	int T(0);
	int m, n;
	int map[MAX][MAX];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> m >> n;
		map[MAX][MAX] = { -1, };

		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				scanf_s("%d", &map[j][k]);
			}
		}

		int answer = 0;

		for (int col = 0; col < n; col++) {
			int cnt = m - 1;
			for (int row = m - 1; row >= 0; row--) {
				if (map[row][col]) {
					answer += cnt - row;
					cnt --;
				}
			}
		}
		cout << answer << endl;
	}


	return 0;
}