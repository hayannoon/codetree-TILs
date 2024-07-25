#include <iostream>

bool isMaginNumber(int n) {
    if(n%2 == 0) {
        int first = n%10;
        int second = n/10;
        if (first+second == 10) return true;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;
    if(isMaginNumber(n)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;

}