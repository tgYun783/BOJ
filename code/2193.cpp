#include <iostream>
using namespace std;

int main()
{
    long long dp[91][2];

    dp[1][1] = 1;
    dp[1][0] = 0;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }
    long long sum = dp[n][0] + dp[n][1];
    cout << sum;
}