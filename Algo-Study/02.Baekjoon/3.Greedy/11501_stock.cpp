#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int T(0);
int N(0);

long long solution(vector<int> day) {
	long long answer(0);
	long long max_val = *max_element(day.begin(), day.end());
	long long max_index(0);

	for (int i = 0; i < N; i++) {
		if (max_val == day[i] && i != N-1) {
			max_val = *max_element(day.begin() + i + 1, day.end());
			continue;
		}
		else {
			answer += max_val - day[i];
		}
	}

	return answer;
}

int main(void) {

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		vector<int> day(N);
		int sum(0);
		for (int j = 0; j < N; j++) {
			cin >> day[j];
		}
		for (int k = 0; k < N; k++) {
			sum += day[k];
		}

		if (day[0] * N == sum) { cout << 0 << endl; }
		else{ cout << solution(day) << endl; }
	}

	return 0;
}