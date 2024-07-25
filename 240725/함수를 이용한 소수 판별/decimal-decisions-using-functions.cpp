#include <iostream>


bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int solve(int a, int b) {
    int sum = 0;
    for(int i = a ; i <= b ; i++){
        if (isPrime(i)) sum += i;
    }
    return sum;
}


int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << solve(a,b) << std::endl;
}