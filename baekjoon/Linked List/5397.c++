#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        list<char> li;
        list<char>::iterator it = li.begin();
        string s;
        cin >> s;
        for (auto e : s)
        {
            if (e == '<')
            {
                if (it != li.begin())
                    it--;
            }
            else if (e == '>')
            {
                if (it != li.end())
                    it++;
            }
            else if (e == '-')
            {
                if (it != li.begin())
                    it = li.erase(--it);
            }
            else
            {
                li.insert(it, e);
            }
            for (auto a : li)
            {
                cout << a;
            }
            cout << "\n";
        }
    }
    return 0;
}