#include<iostream>
using namespace std;

int main() {

	int N(0);
	long answer(0);

	cin >> N;

	// 2���� N���� �� �ڿ����� ������� ���� answer ������ ������.(1�� ������ answer ��� �� ����)
	// �ð��ʰ�.
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

	// 4���� N���� �Ҽ��� Ž�� �� ����.
	// �ð��ʰ�.
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

	// 1���� 10�� ���� �� ��, 1�� 10��, 2�� 5��, 3�� 3��, 4�� 2��, 5�� 2��, 10�� 1��
	// ��, N������ ���� k�� n/k�� ��ŭ ����� ����. ��� k�� ������ �� -> (n/k) * k
	for (int i = 1; i <= N; i++) {
		answer += (N / i) * i;
	}

	cout << answer << endl;

	return 0;
}