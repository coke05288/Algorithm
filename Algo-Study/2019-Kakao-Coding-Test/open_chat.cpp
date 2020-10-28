
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> message;

    for (auto order : record) {
        char convChar[100];

        strcpy_s(convChar, order.c_str());

        char* tok = strtok_s(convChar, " ", &context);
        while (tok != NULL) {
            cout << tok << " ";
            tok = strtok_s(NULL, " ");
        }
        cout << endl;
    }

}

int main(void) {

    solution({ "Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan" });

    

    return 0;
}