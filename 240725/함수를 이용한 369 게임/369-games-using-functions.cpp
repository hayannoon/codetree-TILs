#include <iostream>

bool isMultipleOfThree(int n) {
    return n % 3 == 0;
}

bool hasThreeOrSixOrNine(int n) {
    int tmp = -1;
    while (n > 0) {
        tmp = n % 10;
        if(tmp == 3 || tmp == 6 || tmp == 9) {
            return true;
        }
        n /= 10;
    }
    return false;
}


int solve(int a, int b) {
    int cnt = 0;
    for(int i = a ; i <= b ; i++) {
        if(isMultipleOfThree(i) || hasThreeOrSixOrNine(i)) {
            cnt++;
        }
    }
    return cnt;
}


int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << solve(a,b) << std::endl;

}