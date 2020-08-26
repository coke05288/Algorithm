#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

const int MAX = 1001;

int map[MAX][MAX];
int visited[MAX];
queue<int> que;

int n, m, v;

void dfs(int v) {
	cout << v << ' ';
	visited[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (map[v][i] && !visited[i]) dfs(i);
	}
}

void bfs(int v) {
	visited[v] = 1;
	que.push(v);

	while (!que.empty()) {
		v = que.front();
		que.pop();
		cout << v << ' ';

		for (int i = 1; i <= n; i++) {
			if (map[v][i] && !visited[i]) {
				que.push(i);
				visited[i] = 1;
			}
		}
	}


}


int main() {

	cin >> n >> m >> v;

	memset(map, 0, sizeof(map));
	memset(visited, 0, sizeof(visited));

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}

	dfs(v);
	cout << "\n";

	memset(visited, 0, sizeof(visited));
	bfs(v);
	cout << "\n";

	return 0;
}