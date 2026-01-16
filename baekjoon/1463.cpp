#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N; cin >> N;
    vector<int> dp(N);

    for (int i=N; i>=1; --i) {
        if (i == N) {
            dp[i] = 0;
            continue;
        }
        dp[i] = N;
        if (i * 3 <= N) dp[i] = min(dp[i*3], dp[i]);
        if (i * 2 <= N) dp[i] = min(dp[i*2], dp[i]);
        dp[i] = min(dp[i+1], dp[i]);
        dp[i]++;
    }

    cout << dp[1];

    return 0;
}
