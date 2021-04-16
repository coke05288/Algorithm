#include<iostream>
using namespace std;

// N이 가능한 범위의 배열 생성.
long long dp[1000001];

// 생성한 dp[] 배열에 값 미리 저장.
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

	// cout, cin 객체 속도 문제 -> scanf, printf로 대체
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &N);

		//long long dp[]-> 형식지정자 %lld
		printf("%lld\n", dp[N]);
	}

	return 0;
}
