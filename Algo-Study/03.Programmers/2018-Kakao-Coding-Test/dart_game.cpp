#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;

    string check_num;
    vector<int> num_v;

    for (int i = 0; i < dartResult.length(); i++) {
        if (dartResult[i] != 'S' && dartResult[i] != 'D' && dartResult[i] != 'T' && dartResult[i] != '*' && dartResult[i] != '#') {
            check_num += dartResult[i];
        }
        else {
            int current_point = atoi(check_num.c_str());
            if (dartResult[i] == 'S') {
                current_point = pow(current_point, 1);
                num_v.push_back(current_point);
                check_num = "";
            }
            else if (dartResult[i] == 'D') {
                current_point = pow(current_point, 2);
                num_v.push_back(current_point);
                check_num = "";
            }
            else if (dartResult[i] == 'T') {
                current_point = pow(current_point, 3);
                num_v.push_back(current_point);
                check_num = "";
            }
            else if (dartResult[i] == '*') {
                if (num_v.size() > 1) {
                    num_v[num_v.size() - 1] *= 2;
                    num_v[num_v.size() - 2] *= 2;
                }
                else {
                    num_v[num_v.size() - 1] *= 2;
                }
            }
            else {
                num_v[num_v.size() - 1] *= -1;
            }
        }
    }

    for (auto i : num_v) {
        answer += i;
    }

    return answer;
}

int main(void) {

    cout << solution("1T2D3D#") << endl;

    return 0;
}