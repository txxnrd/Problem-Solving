#include <iostream>

using namespace std;
int d[1001][10];
int N;
int sum = 0;

int main(void)
{
    cin >> N;
    for (int i = 0; i < 10; i++)
    {
        d[1][i] = 1;
    }
    for (int n = 2; n <= N; n++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                d[n][i] += d[n - 1][j];
                d[n][i] %= 10007;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        sum += d[N][i];
        sum %= 10007;
    }
    cout << sum % 10007 << endl;
}