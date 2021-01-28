#include<iostream>
using namespace std;



int main() {

	// std::ios_base::sync_with_stdio(false) : cout, cin <-> stdin, stdout이 사용하는 버퍼를 분리한다.
	// cout과 cin의 속도는 향상되지만, cout,cin과 stdin,stdout을 혼합해서 사용할 수 없다.
	// endl : 개행 후 출력 버퍼를 비우는 기능을 하기 때문에 속도가 느리다. 
	// cin.tie(NULL) : cout에 묶여 있는 cin을 분리해준다. 기존의 cin을 실행하면, cout의 버퍼를 먼저 비워준다. 
	
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}		

	return 0;
}