#include <iostream>
using namespace std;

int dp[1001];

int main() {
    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;

    if(n < 4) {
        cout << dp[n] << '\n';
        return 0;
    } else {
        for(int i = 4; i <= n; i++) {
            dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
        }
    }

    cout << dp[n] << '\n';
    return 0;
}