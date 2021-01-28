#include<iostream>
#include<vector>
using namespace std;

const int MAX = 9;
int n, m;
int arr[MAX];
bool check[MAX];

void recur(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			check[i] = true;
			arr[cnt] = i;
			recur(cnt + 1);
			check[i] = false;
		}
	}
}

int main(void) {
	
	cin >> n >> m;

	recur(0);

	return 0;
}