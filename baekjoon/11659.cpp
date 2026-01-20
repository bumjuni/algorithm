#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N, M;
    vector<int> sum;

    cin >> N >> M;
    sum.push_back(0);
    for (int i=0; i<N; ++i){
        int num; cin >> num;
        sum.push_back(sum.back() + num);
    }

    for (int k=0; k<M; ++k) {
        int i, j;
        cin >> i >> j;
        int result = sum[j] - sum[i-1];
        cout << result << '\n';
    }

    return 0;
}
