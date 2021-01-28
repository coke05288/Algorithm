#include<iostream>
#include<vector>
using namespace std;

// N + 100 -> N
// �־��� �迭 A�� �� ���Ұ� 0���� 100������ ���� ���, ���� ���� �����ϴ� ���ڸ� ��ȯ�Ѵ�.
int majority2(const vector<int>& A) {

	int N = A.size();
	vector<int> count(101, 0);

	for (int i = 0; i < N; i++) {
		count[A[i]]++;
	}


	// ���ݱ��� Ȯ���� ���� �� ���� �󵵼��� ū ���� majority ������ ����.
	int majority = 0;
	
	for (int i = 1; i < 101; i++) {
		if (count[i] > count[majority]) {
			majority = i;
		}
	}

	return majority;
}

int main() {

	vector<int> A = { 60, 30, 25, 100, 100 };

	cout << majority2(A) << endl;

	return 0;
}