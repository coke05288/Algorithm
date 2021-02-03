// �־��� 20�Ϻ��� ������ �������� 5�� �̵���� ���� ���Ѵ�.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// M x (N - M +1)�� ����
vector<double> movingAverage1(const vector<double>& A, int M) {
	vector<double> ret;

	int N = A.size();

	for (int i = M - 1; i < N; i++) {
		double partialSum = 0;
		for (int j = 0; j < M; j++) {
			partialSum += A[i - j];
		}
		ret.push_back(partialSum / M);
	}
	return ret;
}

int main(void) {

	// �Ｚ ī�� 1�� 7�Ϻ��� 2�� 3�ϱ��� ����.
	vector<double> samsung_card = { 31300, 31150, 30900, 29700, 30850, 32000, 31750, 32300, 32200, 32700, 32800, 32700, 32200, 32700, 32900, 32550, 32200, 32250, 32600 };
	const int M = 5;

	// 5�� �̵���� ���
	for (auto ma : movingAverage1(samsung_card, M)) {
		cout << ma << " " << endl;
	}


	return 0;
}