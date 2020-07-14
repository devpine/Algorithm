#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001];
int P[10001];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> P[i];
        dp[i] = -1;
    }
    dp[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (dp[i] == -1 || dp[i] > dp[i - j] + P[j])
                dp[i] = dp[i - j] + P[j];
        }
    }
    cout << dp[N] << '\n';
    return 0;
}

