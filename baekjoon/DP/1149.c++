#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int array[1001][3];

    for (int i = 0; i < N; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> array[i][1] >> array[i][2] >> array[i][3];
        }
    }
}