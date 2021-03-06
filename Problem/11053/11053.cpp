#include <iostream>
using namespace std;

int dp[1001];

int main() {
    int n, arr[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        int max = 0;
        for (int j = 1; j < i; j++) { // 현재 값 기준 아래에 있는 값들을 비교하여 작은 값의 dp중 가장 큰 dp값에 1을 더함
            if (arr[i] > arr[j]) {
                if (dp[j] > max) {
                    max = dp[j];
                }
            }
        }
        dp[i] = max + 1;
    }
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (dp[i] > ans) {
            ans = dp[i];
        }
    }
    cout << ans << '\n';
    return 0;
}