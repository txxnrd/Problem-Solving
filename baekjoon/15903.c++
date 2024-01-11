#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, m;
long long new_element = 0;
long long sum = 0;
int main(void)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    for (int i = 0; i < m; i++)
    {
        long long min1 = pq.top();
        pq.pop();
        long long min2 = pq.top();
        pq.pop();
        new_element = (min1 + min2);
        for (int i = 0; i < 2; i++)
            pq.push(new_element);
    }
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    cout << sum;
}