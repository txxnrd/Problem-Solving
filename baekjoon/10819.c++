#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;
int N;
int Max = 0;
void calculation(vector<int> vect)
{
    int sum = 0;
    for (int i = 1; i < N; i++)
    {
        sum += abs(vect[i] - vect[i - 1]);
    }

    Max = max(sum, Max);
}

int main()
{

    vector<int> array;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        array.push_back(a);
    }
    sort(array.begin(), array.end());
    while (next_permutation(array.begin(), array.end()))
    {
        calculation(array);
    }
    cout << Max;
}
