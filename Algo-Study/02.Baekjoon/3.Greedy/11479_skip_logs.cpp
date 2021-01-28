#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int T(0);
int N(0);

int solution(vector<int> Li, int answer = 0, int swt = 0, int max = 0) {

	int i(0);
	int j(Li.size() - 1);
	vector<int> answer_li(N, 0);

	for (int k = 0; k < N; k++) {
		switch (swt) {
		case 0:
			answer_li[i] = Li[k];
			i++;
			swt = 1;
			break;
		case 1:
			answer_li[j] = Li[k];
			j--;
			swt = 0;
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < N-1; i++) {
		if (max < abs(answer_li[i] - answer_li[i + 1])) {
			max = abs(answer_li[i] - answer_li[i + 1]);
		}
	}

	return max;
}

int main(void) {

	cin >> T;

	vector<int> answer;

	for (int i = 0; i < T; i++) {
		vector<int> Li;
		cin >> N;
		for (int j = 0; j < N; j++) {
			int x(0);
			cin >> x;
			Li.push_back(x);
		}
		sort(Li.begin(), Li.end());
		cout << solution(Li) << endl;
	}

	return 0;
}