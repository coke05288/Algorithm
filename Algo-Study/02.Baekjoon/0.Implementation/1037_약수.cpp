#include<iostream>
using namespace std;

int main() {

	// ����� ���� �Է¹ޱ�.
	int num(0);
	cin >> num;

	// ��� �� �Է¹ޱ�.
	int* arr = new int[num];
	for (int i = 0; i < num; i++) cin >> arr[i];

	// cout << arr[0] * arr[num - 1] << endl;
	// �Է� �޴� ����� ������� ������ �� �˾�����,
	// ������� �ȵ��� �� ���� -> �ִ밪, �ּҰ� ���� �ʿ�.
	
	// �ּҰ�, �ִ밪 ���� �ʱ�ȭ.
	int min = arr[0];
	int max = 0;

	// �ּҰ�, �ִ밪 Ž��
	for (int i = 0; i < num; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	// ���� ���
	cout << max * min << endl;
	
	return 0;
}