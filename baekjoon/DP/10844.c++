#include <iostream>

using namespace std;
int main()

{
    int N;
    long long sum = 0;
    cin >> N;
    long long d[100][10];
    d[1][0] = 0;
    for (int i = 1; i < 10; i++)
    {
        d[1][i] = 1;
    }
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j == 0)
            {
                d[i][j] = d[i - 1][j + 1];
            }
            else if (j == 9)
            {
                d[i][j] = d[i - 1][j - 1];
            }
            else
            {
                d[i][j] = d[i - 1][j + 1] + d[i - 1][j - 1];
            }
        }
        d[i][j] = d[i][j] % 1000000000;
    }

    for (int i = 0; i < 10; i++)
    {
        sum += d[N][i];
    }
    cout << (sum % 1000000000);
}