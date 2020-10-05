#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int R(0);
int C(0);
int direction[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
int answer(0);

vector<vector<char>> map(101, vector<char>(101, '.'));
vector<vector<bool>> visited(101, vector<bool>(101, false));


void bfs(int i, int j) {

	visited[i][j] = true;

	for (int k = 0; k < 4; k++) {
		int re_R = i + direction[k][0];
		int re_C = j + direction[k][1];
		if (re_R < 0 || re_R >= R || re_C < 0 || re_C >= C) continue;
		if (!visited[re_R][re_C] && map[re_R][re_C] == '#') bfs(re_R, re_C);
	}
}

int main(void) {

	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> map[i][j];
		}
	}


	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (map[i][j] == '#' && !visited[i][j]) {
				bfs(i, j);
				answer++;
			}
		}
	}

	cout << answer << endl;

	return 0;
}