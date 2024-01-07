// BackTracking
// น้มุ Nฐ๚ M(4) 15652

#include <iostream>
using namespace std;
constexpr int MAX = 9;

int N, M;
int arr[MAX];

void dfs(int num, int idx) {
	if (idx == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else {
		for (int i = num; i <= N; i++) {
			arr[idx] = i;
			dfs(i, idx + 1);
		}
	}
}

int main() {
	cin >> N >> M;

	dfs(1, 0);

	return 0;
}