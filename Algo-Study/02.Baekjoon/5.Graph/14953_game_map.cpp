#include<iostream>
#include<vector>
using namespace std;

int n(0);
int m(0);
int max_num(0);
int cnt(0);
vector<vector<int>> map(100001);
vector<bool> visited(100001, false);
vector<int> edge_num(100001);

int dfs(int v) {

	visited[v] = true;
	cnt++;

	for (auto check : map[v]) {
		if (edge_num[v] < edge_num[check] && !visited[check]) {
			dfs(check);
		}
	}

	visited[v] = false;
	cnt--;

	return cnt;
}

int main(void) {
	

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int s(0);
		int e(0);
		cin >> s >> e;

		map[s].push_back(e);
		map[e].push_back(s);
	}

	for (int i = 0; i < n; i++) {
		edge_num[i] = map[i].size();
	}

	for (int i = 0; i < n; i++) {
		int temp = dfs(i);
		if (max_num < temp ) {
			max_num = temp;
		}
		cnt = 0;
	}

	cout << max_num;

	return 0;
}