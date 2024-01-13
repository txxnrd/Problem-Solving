#include <iostream>

using namespace std;
int main(void)
{
    int N;
    cin >> N;
    long long d[100001][3];
    d[1][0] = 1;
    d[1][1] = 1;
    d[1][2] = 1;

    for (int i = 2; i <= N; i++)
    {
        d[i][0] = (d[i - 1][0] + d[i - 1][1] + d[i - 1][2]) % 9901;
        d[i][1] = (d[i - 1][0] + d[i - 1][2]) % 9901;
        d[i][2] = (d[i - 1][0] + d[i - 1][1]) % 9901;
    }

    cout << (d[N][0] + d[N][1] + d[N][2]) % 9901;
}