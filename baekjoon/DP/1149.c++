#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int array[1001][3];
    int d[1001][3];

    for (int i = 0; i < N; i++)
    {
        cin >> array[i][0] >> array[i][1] >> array[i][2];
    }
    d[0][0] = array[0][0];
    d[0][1] = array[0][1];
    d[0][2] = array[0][2];
    for (int i = 1; i < N; i++)
    {
        d[i][0] = min(d[i - 1][1] + array[i][0], d[i - 1][2] + array[i][0]);
        d[i][1] = min(d[i - 1][0] + array[i][1], d[i - 1][2] + array[i][1]);
        d[i][2] = min(d[i - 1][0] + array[i][2], d[i - 1][1] + array[i][2]);
    }

    cout << min(min(d[N - 1][0], d[N - 1][1]), d[N - 1][2]);
}