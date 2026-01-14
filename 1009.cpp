#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T, A, B;
    cin >> T;

    while (T--) {
        cin >> A >> B;
        int last = A % 10;
        int result = 0;

        if (last == 0)    result = 10;
        else if (last == 6) result = 6;
        else if (last == 4 && B % 2 == 0) result = 6;
        else if (last == 4 && B % 2 == 1) result  = 4;
        else {
            while (--B) {
                last = (last * A) % 10;
            }
            result = last;
        }
        cout << result << '\n';
        }

    return 0;
}
