#include<iostream>
#include<queue>
#include<cstdio>
#define MAX 101
using namespace std;

int n, m = 0;
int map[MAX][MAX] = { -1, };
bool visited[MAX][MAX] = { false, };
int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { -1, 0, 1, 0 };

int bfs(int x, int y) {
	int answer = 0;
	queue<pair<int, int>> q;

	q.push({ 0,0 });
	visited[0][0] = true;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int tx, ty;
			tx = x + dx[i];
			ty = y + dy[i];

			if (tx >= 0 && ty >= 0 && tx < n && ty < m) {
				if (!visited[tx][ty] && map[tx][ty] == 1) {
					q.push({ tx, ty });
					map[tx][ty] = map[x][y] + 1;
					visited[tx][ty] = true;
				}
			}
		}
		if (x == n - 1 && y == m - 1)
			return map[x][y];
	}

}

int main() {

	scanf_s("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &map[i][j]);
		}

	}

	cout << bfs(0, 0);


	return 0;
}