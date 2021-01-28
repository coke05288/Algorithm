#include<iostream>
using namespace std;

const int N = 8;
int S[N] = { 15, 22, 13, 27, 12, 10, 20, 25 };

// pivotitem�� �������� �۰ų� ���� ���� A, ū ���� B�� ������ ��, �ٽ� ��ġ�� �Լ�.
void partition1(int low, int high, int& pivotpoint) {
	int pivotitem(S[low]);

	int* A = new int[N];
	int* B = new int[N];

	int A_index(0); // A ��Ʈ���� ���� index.
	int B_index(0); // B ��Ʈ���� ���� index.

	for (int i = low + 1; i <= high; i++) {
		if (S[i] <= pivotitem) {
			A[A_index++] = S[i];
		}
		else {
			B[B_index++] = S[i];
		}
	}

	int T_index = low;
	for (int j = 0; j < A_index; j++) {
		S[T_index++] = A[j];
	}
	pivotpoint = T_index;
	S[T_index++] = pivotitem;
	for (int k = 0; k < B_index; k++) {
		S[T_index++] = B[k];
	}
}

// pivotitem�� �������� �۰ų� ���� ���� �ӽ� �迭 T�� �պ���, ū ���� �ں��� ä��� �Լ�.
void partition2(int low, int high, int& pivotpoint) {
	int pivotitem(S[low]);

	int* T = new int[high + 1];

	int front_index(low); // pivot ���� ���� ��.
	int end_index(high); // pivot ���� ū ��.

	for (int i = low + 1; i <= high; i++) {
		if (S[i] < pivotitem) {
			T[front_index++] = S[i];
		}
		else {
			T[end_index--] = S[i];
		}
	}

	pivotpoint = front_index;
	T[front_index] = pivotitem;
	for (int i = low; i < high + 1; i++) {
		S[i] = T[i];
	}
}

// pivotite(���� ������)���� ���� ���� �������� ��� ��, ��� ����(index)�� j�� pivotpoint�� �������ִ� �Լ�.
void partition3(int low, int high, int& pivotpoint) {
	int pivotitem = S[low];
	int j = low;

	for (int i = low + 1; i <= high; i++) {
		if (S[i] < pivotitem) {
			j++;
			swap(S[i], S[j]);
		}
	}
	pivotpoint = j;
	swap(S[low], S[pivotpoint]);
}

void quicksort(int low, int high) {
	int pivotpoint;
	if (low < high) {
		partition1(low, high, pivotpoint);
		//partition2(low, high, pivotpoint);
		//partition3(low, high, pivotpoint);
		quicksort(low, pivotpoint - 1);
		quicksort(pivotpoint + 1, high);
	}
}


int main(void) {

	int low = 0;
	int high = N - 1;

	quicksort(low, high);

	for (auto i : S) {
		cout << i << ' ';
	}

	return 0;
}