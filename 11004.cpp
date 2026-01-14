#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, K;
    vector<int> numbers;
    cin >> N >> K;

    for (int i=0; i<N; i++) {
        int num; cin >> num;
        numbers.push_back(num);
    }
    sort(numbers.begin(), numbers.end());
    cout << numbers[K-1] << '\n';

    return 0;
}
