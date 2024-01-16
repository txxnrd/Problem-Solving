#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    list<int> circ_list;
    for (int i = 1; i <= N; i++)
    {
        circ_list.push_back(i);
    }
    list<int>::iterator cur = circ_list.begin();

    cout << "<";

    for (int i = 1; i <= N; i++)
    {

        for (int j = 0; j < K - 1; j++)
        {
            cur++;
            if (cur == circ_list.end()) // end는 마지막 원소 다음을 가르킴
                cur = circ_list.begin();
        }

        cout << *cur;
        if (i != N)
            cout << ", ";

        cur = circ_list.erase(cur);

        if (cur == circ_list.end())
        {
            cur = circ_list.begin();
        }
    }
    cout << ">";
}