#include <iostream>
using namespace std;

bool isYoonNyeon(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            return false;
        }
        return true;
    }
    return false;

}


int main() {
    int year;
    cin >> year;
    cout << isYoonNyeon(year) << endl;
}