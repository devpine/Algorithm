#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int c[1000001];
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> s;

    int n;

    cin >> n;
    vector<int> arr(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        c[arr[i]] += 1;
    }

    s.push(0);

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && c[arr[s.top()]] < c[arr[i]])
        {
            ans[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty())
    {
        ans[s.top()] = -1;
        s.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
    }
    cout << '\n';


    return 0;
}

