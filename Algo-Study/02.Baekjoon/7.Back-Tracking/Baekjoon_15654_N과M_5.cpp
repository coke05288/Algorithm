// BackTracking
// น้มุ Nฐ๚ M(5) 15654

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

constexpr int MAX = 9;

int N, M;
vector<bool> visited(MAX, false);
vector<int> nums, arr;

void dfs(int idx, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	else {
		for (int i = 0; i < N; i++) {
			if (!visited[i]) {
				arr.push_back(nums[i]);
				visited[i] = true;
				dfs(idx + 1, cnt + 1);
				visited[i] = false;
				arr.pop_back();
			}
		}
	}
}

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		int temp;
		scanf("%d", &temp);
		nums.push_back(temp);
	}

	sort(nums.begin(), nums.end());
	dfs(0, 0);

	return 0;
}