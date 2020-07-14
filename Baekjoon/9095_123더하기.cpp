#include <iostream>

using namespace std;

int dp[11];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T,n;
    cin >> T;
    dp[0] = 1; dp[1] = 1; dp[2] = 2;

    while (T--)
    {
        cin >> n;
        
        for (int i = 3; i <= n; i++)
            dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];

        cout << dp[n] << '\n';
    }
    return 0;
}

