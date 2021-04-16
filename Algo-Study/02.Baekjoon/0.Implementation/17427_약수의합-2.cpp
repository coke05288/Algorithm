#include<iostream>
using namespace std;

int main() {

	int N(0);
	long answer(0);

	cin >> N;

	// 2부터 N까지 각 자연수의 약수들의 합을 answer 변수에 더해줌.(1은 마지막 answer 출력 때 더함)
	// 시간초과.
	/*for (int i = 2; i <= N; i++) {
		int div_num = i;
		while (div_num >= 1) {
			if (i % div_num == 0) {
				answer += div_num;
			}
			div_num--;
		}

		cout << answer+1 << endl;
	}*/

	// 4부터 N까지 소수만 탐색 후 저장.
	// 시간초과.
	/*if (N <= 3) {
		if (N == 1) {
			answer = 1;
		}
		else if (N == 2) {
			answer = 4;
		}
		else if (N == 3) {
			answer = 8;
		}
		cout << answer << endl;
		return 0;
	}

	for (int i = 4; i <= N; i++) {
		if (N % 2 != 0 || N % 3 != 0) {
			int div_num = i;
			while (div_num >= 1) {
				if (i % div_num == 0) {
					answer += div_num;
				}
				div_num--;
			}
		}
		else {
			answer += 1 + i;
		}
		cout << answer + 8 << endl;
	}*/

	// 1부터 10을 예로 들 때, 1은 10개, 2는 5개, 3은 3개, 4는 2개, 5는 2개, 10은 1개
	// 즉, N이하의 숫자 k는 n/k개 만큼 약수로 존재. 모든 k의 개수의 합 -> (n/k) * k
	for (int i = 1; i <= N; i++) {
		answer += (N / i) * i;
	}

	cout << answer << endl;

	return 0;
}