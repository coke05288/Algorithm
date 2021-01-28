#include<iostream>
#include <string>
#include <vector>

using namespace std;

int cnt(0);

int dfs(vector<vector<int>> map, vector<vector<int>> visited, int v, int p, int cnt) {
	int size = map.size();
	int sum = 0;
	cout << map[v][p] << ' ';
	visited[v][p] = 1;
	cnt++;

	if (cnt == 5) {
		return sum;
	}

	for (int i = v; i < 2; i++) {
		for (int j = p; j < size; j++) {
			if (!visited[j][i]) {
				sum += map[j][i];
				dfs(map, visited, j, i, cnt);
			}
			
		}
		cout << endl;
		cnt = 0;
	}
}

int solution(vector<int> numbers, int target) {
	int answer = 0;
	int size = numbers.size();

	// 값을 체크할 map vector를 선언하고, 양수값, 음수값으로 초기화 해준다. 
	vector<vector<int>> map(size, vector<int>(2, 0));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				map[i][j] = numbers[i];
			}
			else {
				map[i][j] = -numbers[i];
			}
		}
	}
	// 방문 여부를 체크할 visited를 선언과 함께 모두 0으로 채워준다.
	vector<vector<int>> visited(size, vector<int>(2, 0));

	//answer = dfs(map, visited, 0, 0, cnt);

	return answer;
}

int main(void) {

	vector<int> numbers = { 1, 1, 1, 1, 1 };

	cout << solution(numbers, 3) << endl;

	return 0;
}