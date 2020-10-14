#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	queue<int> q;
	int current(0);
	
	for (int i = 0; i < progresses.size(); i++) {
		int day(0);
		while (progresses[i] < 100) {
			progresses[i] += speeds[i];
			day++;
		}
		q.push(day);
	}

	int cnt(1);
	current = q.front();
	q.pop();

	while (!q.empty()) {
		if (current >= q.front()) {
			q.pop();
			cnt++;
		}
		else {
			answer.push_back(cnt);
			cnt = 1;
			current = q.front();
			q.pop();
		}
	}
	answer.push_back(cnt);

	return answer;
}

int main() {

	for (auto i : solution({ 93, 30, 55 }, { 1, 30, 5 })) {
		cout << i << " ";
	}

	return 0;
}