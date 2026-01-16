#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N, K;
    cin >> N >> K;
    vector<int> coins;
    for (int i=0; i<N; ++i) {
        int coin; cin >> coin;
        coins.push_back(coin);
    }

    int result = 0;
    for (int i=coins.size()-1; i>=0; --i) {
        if (coins[i] > K)   continue;
        result += K / coins[i];
        K = K % coins[i];
    }

    cout << result;
}
