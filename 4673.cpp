#include <iostream>

using namespace std;

int construct(int n) {
    int result = n;
    while (n > 0) {
        result += n % 10;
        n = n / 10;
    }
    return result;
}

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    bool numbers[10101] = {false};

    for (int i=1; i<=10000; ++i) {
        if (numbers[i]) continue;
        int constructed = construct(i);
        while (constructed <= 10000) {
            numbers[constructed] = true;
            constructed = construct(constructed);
        }
    }

    for (int i=1; i<=10000; ++i) {
        if (!numbers[i]) cout << i << '\n';
    }

    return 0;
}
