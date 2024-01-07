// BackTracking
// 백준 N과 M(2) 15650

#include <iostream>
using namespace std;
constexpr int MAX = 9;

int N, M;
int arr[MAX];

void dfs(int num, int idx) {
	// 결과값 출력
	if (idx == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	// num 배열에 수열 저장
	else {
		for (int i = num; i <= N; i++) {
			arr[idx] = i;
			dfs(i + 1, idx + 1);
		}
	}
}

int main() {

	cin >> N >> M;
	
	dfs(1, 0);

	return 0;
}