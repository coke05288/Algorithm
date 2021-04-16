#include<iostream>
using namespace std;

int main() {

	// 약수의 개수 입력받기.
	int num(0);
	cin >> num;

	// 약수 값 입력받기.
	int* arr = new int[num];
	for (int i = 0; i < num; i++) cin >> arr[i];

	// cout << arr[0] * arr[num - 1] << endl;
	// 입력 받는 약수가 순서대로 들어오는 줄 알았으나,
	// 순서대로 안들어올 수 있음 -> 최대값, 최소값 저장 필요.
	
	// 최소값, 최대값 변수 초기화.
	int min = arr[0];
	int max = 0;

	// 최소값, 최대값 탐색
	for (int i = 0; i < num; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	// 정답 출력
	cout << max * min << endl;
	
	return 0;
}