#include <iostream>
#include <vector>

using namespace std;

int get_max_score (int N, const vector<int>& scores) {
    vector<int> dp(N+1);
    dp[0] = 0;
    dp[1] = scores[1];
    dp[2] = scores[1] + scores[2];
    for (int i=3; i<=N; ++i) {
        dp[i] = max(dp[i-2] + scores[i], dp[i-3] + scores[i-1] + scores[i]);
    }

    return dp[N];
}

int main(void) {
    int N; cin >> N;
    vector<int> scores;
    scores.push_back(0);

    for (int i=0; i<N; ++i) {
        int score; cin >> score;
        scores.push_back(score);
    }

    cout << get_max_score(N, scores);
    return 0;
}
