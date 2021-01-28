#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long m, n;
vector<int> v;

bool D(long long x) {
    long long temp = 0;

    for (auto t : v) {
        temp += x / t;
    }
    return temp >= m;
}

int main(void) {

    cin >> n >> m;

    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    long long low = 0;
    long long high = v.back() * m;
    long long res = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (D(mid)) {
            res = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << res << endl;
}