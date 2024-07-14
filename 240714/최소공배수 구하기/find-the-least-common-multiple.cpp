#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n, int m) {
    int maxValue = max(n, m);
    while(true) {
        if(maxValue % n == 0 && maxValue % m == 0) {
            return maxValue;
        }
        maxValue++;
    }
    return maxValue;
}


int main() {
    // 여기에 코드를 작성해주세요.

    int n,m;
    cin >> n >> m;
    cout << solve(n, m) << endl;
    return 0;
}