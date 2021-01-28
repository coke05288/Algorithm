#include<iostream>
#include<vector>
using namespace std;

// N^2
// 주어진 배열에서 가장 많이 등장하는 숫자를 반환하기.
// 두가지 이상있을 경우 아무 값이나 반환.
int majority1(const vector<int>& A) {

	int N = A.size();
	int majority = -1;
	int majorityCount = 0;

	for (int i = 0; i < N; i++) {
		int V = A[i];
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (V == A[j]) {
				count++;
			}
		}

		if (count > majorityCount) {
			majorityCount = count;
			majority = V;
		}
	}

	return majority;
}

int main() {
	
	vector<int> A = { 1,2,3,3,4,5,6 };

	cout << majority1(A) << endl;

	return 0;
}