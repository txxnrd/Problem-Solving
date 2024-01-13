#include <iostream>
#include <queue>
using namespace std;
int N;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    int a;

    for (int i = 0; i < N * N; i++)
    {

        cin >> a;
        pq.push(a);
        if (pq.size() > N)
            pq.pop();
    }
    int result = pq.top();
    cout << result;
}