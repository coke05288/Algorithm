#include<iostream>
using namespace std;

// N�� ������ ������ �迭 ����.
long long dp[1000001];

// ������ dp[] �迭�� �� �̸� ����.
void sumMeasure() {

	for (int i = 1; i < 1000001; i++) {
		for (int j = 1; i*j < 1000001; j++) {
			dp[i * j] += i;
		}
		dp[i] += dp[i - 1];
	}
}

int main() {

	sumMeasure();

	int T(0);
	int N(0);

	// cout, cin ��ü �ӵ� ���� -> scanf, printf�� ��ü
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &N);

		//long long dp[]-> ���������� %lld
		printf("%lld\n", dp[N]);
	}

	return 0;
}
