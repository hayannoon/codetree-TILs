#include <iostream>
using namespace std;

void Print10Start() {
    for(int i = 0 ; i < 10 ; i++) 
        cout << "*";
    cout << endl;
}

int main() {
    for(int i = 0 ; i < 5 ; i++) {
        Print10Start();
    }

    return 0;
}