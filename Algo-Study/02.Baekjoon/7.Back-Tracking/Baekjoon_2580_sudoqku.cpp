#include<iostream>
#include<vector>
using namespace std;

int board[9][9]; // 스도쿠 보드
int blanks = 0; // 스도쿠 빈칸 개수
vector<pair<int, int>> blank_pos; // 빈칸 위치

bool check(pair<int, int> p) {

	// 같은 행, 열 check : 같은 숫자가 있으면 return false
	for (int i = 0; i < 9; i++) {
		if (i != p.second && board[p.first][i] == board[p.first][p.second])
			return false;
		if (i != p.first && board[i][p.second] == board[p.first][p.second])
			return false;
	}



}

void sudoku(int n) {
	if (n == blanks) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				cout << board[i][j] << ' ';
			cout << '\n';
		}
	}
	for (int i = 1; i <= 9; i++) {
		board[blank_pos[n].first][blank_pos[n].second] = i;
		if (check(blank_pos[n])) sudoku(n + 1);
	}
}

int main(void) {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> board[i][j];
			if (board[i][j] == 0) {
				blank_pos.push_back(pair<int, int>(i, j));
				blanks++;
			}
		}
	}

	cout << blanks << endl;
	for (int i = 0; i < blank_pos.size(); i++) {
		printf("(%d, %d) ", blank_pos[i]);
	}

	sudoku(0);


	return 0;
}