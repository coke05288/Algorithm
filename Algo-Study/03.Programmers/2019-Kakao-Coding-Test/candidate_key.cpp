#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int row;
int col;

int countBits(int n) {
    int ret = 0;
    while (n) {
        if (n & 1) ret++;
        n = n >> 1;
    }
    return ret;
}

bool compare(int a, int b) {
    int x = countBits(a);
    int y = countBits(b);

    return x > y;
}

bool check(vector<vector<string>> relation, int subset) {
    for (int a = 0; a < row - 1; a++) {
        for (int b = a + 1; b < row; b++) {
            bool isTrue = true;
            for (int k = 0; k < col; k++) {
                if ((subset & (1 << k)) == 0) continue;
                if (relation[a][k] != relation[b][k]) {
                    isTrue = false;
                    break;
                }
            }
            if (isTrue) return false;
        }
    }
    return true;
}


int solution(vector<vector<string>> relation) {
    int answer = 0;

    row = relation.size();
    col = relation.front().size();

    vector<int> candidates;

    //유효성 검사
    for (int i = 1; i < (1 << col); i++) {
        if (check(relation, i)) {
            candidates.push_back(i);
        }
    }

    sort(candidates.begin(), candidates.end(), compare);

    while (!candidates.empty()) {
        int n = candidates.back();
        candidates.pop_back();
        answer++;
        // 최소성 검사
        for (vector<int>::iterator it = candidates.begin(); it != candidates.end();) {
            if ((n & *it) == n) {
                it = candidates.erase(it);
            }
            else {
                it++;
            }
        }
    }

    return answer;
}

int main(void) {

    cout << solution({{"100", "ryan", "music", "2"}, {"200", "apeach", "math", "2"}, {"300", "tube", "computer", "3"}, {"400", "con", "computer", "4"}, {"500", "muzi", "music", "3"}, {"600", "apeach", "music", "2"}} ) << endl;

    return 0;
}