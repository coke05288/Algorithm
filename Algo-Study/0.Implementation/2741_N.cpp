#include<iostream>
using namespace std;



int main() {

	// std::ios_base::sync_with_stdio(false) : cout, cin <-> stdin, stdout�� ����ϴ� ���۸� �и��Ѵ�.
	// cout�� cin�� �ӵ��� ��������, cout,cin�� stdin,stdout�� ȥ���ؼ� ����� �� ����.
	// endl : ���� �� ��� ���۸� ���� ����� �ϱ� ������ �ӵ��� ������. 
	// cin.tie(NULL) : cout�� ���� �ִ� cin�� �и����ش�. ������ cin�� �����ϸ�, cout�� ���۸� ���� ����ش�. 
	
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}		

	return 0;
}