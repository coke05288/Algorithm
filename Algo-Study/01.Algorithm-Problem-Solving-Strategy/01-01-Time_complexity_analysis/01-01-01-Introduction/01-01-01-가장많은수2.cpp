// 주어진 배열 A의 각 원소가 0부터 100사이의 값일 경우, 가장 많이 등장하는 숫자를 반환한다.
#include<iostream>
#include<vector>
using namespace std;

// N + 100 -> N
int majority2(const vector<int>& A) {

	int N = A.size();
	vector<int> count(101, 0);

	for (int i = 0; i < N; i++) {
		count[A[i]]++;
	}

	// 지금까지 확인한 숫자 중 제일 빈도수가 큰 것을 majority 변수에 저장.
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