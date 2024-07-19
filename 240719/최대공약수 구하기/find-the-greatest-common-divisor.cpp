#include <iostream>
using namespace std;

int solution(int n, int m)
{

    int bigNumber = (n > m) ? n : m;
    int smallNumber = (n < m) ? n : m;
    int answer = 1;
    int i = 2;

    for (i; i <= smallNumber; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            n /= i;
            m /= i;
            answer *= i;
            i = 1;
        }
        if (n == 1 || m == 1)
        {
            break;
        }
    }

    return answer;
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << solution(n, m) << endl;

    return 0;
}