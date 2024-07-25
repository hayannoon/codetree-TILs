#include <iostream>

int getMinNum(int a, int b, int c) {
    return std::min(a, std::min(b, c));
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << getMinNum(a, b, c) << std::endl;
    return 0;

}