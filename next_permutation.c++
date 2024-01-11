#include <iostream>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 3};
    int len = v.size();
    sort(v.begin(), v.end());

    while (next_permutation(v.begin(), v.end()))
    {
        for (int i = 0; i < len; i++)
            cout << v[i] << " ";
        cout << "\n\n";
    }
}