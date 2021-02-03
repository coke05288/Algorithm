// 1번 예제와 동일하나 중복되는 M까지의 중복 연산을 제거.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// M - 1 + (N - M + 1) => N
vector<double> movingAverage1(const vector<double>& A, int M) {
	vector<double> ret;

	int N = A.size();
	double partialSum = 0;

	// M - 1까지의 합을 미리 계산
	for (int i = 0; i < M - 1; i++) {
		partialSum += A[i];
	}
	// M번째 수를 더해주고 이동평균 벡터에 넣어준다.
	// 이후 제일 앞의 수를 전체 합의 수에서 빼준다.
	for (int i = M - 1; i < N; i++) {
		partialSum += A[i];
		ret.push_back(partialSum / M);
		partialSum -= A[i - M + 1];
	}

	return ret;
}

int main(void) {

	// 삼성 카드 1월 7일부터 2월 3일까지 종가.
	vector<double> samsung_card = { 31300, 31150, 30900, 29700, 30850, 32000, 31750, 32300, 32200, 32700, 32800, 32700, 32200, 32700, 32900, 32550, 32200, 32250, 32600 };
	const int M = 5;

	// 5일 이동평균 계산
	for (auto ma : movingAverage1(samsung_card, M)) {
		cout << ma << " " << endl;
	}


	return 0;
}