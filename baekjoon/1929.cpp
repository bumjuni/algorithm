#include <iostream>
#include <vector>

using namespace std;

void seieve(int limit, vector<bool>& primes) {
    primes[0] = true;
    primes[1] = true;
    for (int i=2; i*i<=limit; ++i) {
        if (primes[i])  continue;
        for (int j=2; j*i<=limit; ++j) {
            primes[i*j] = true;
        }
    }
}

int main(void) {
    int M, N; cin >> M >> N;
    vector<bool> primes(N);
    seieve(N, primes);
    for (int i=M; i<=N; ++i) {
        if (!primes[i])  cout << i << '\n';
    }

    return 0;
}
