#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int N; cin >> N;
    vector<int> stk;

    for (int i=0; i<N; ++i) {
        string command;
        cin >> command;

        if (command == "push") {
            int num; cin >> num;
            stk.push_back(num);
        }
        else if (command == "pop") {
            if (stk.empty())    cout << "-1" << '\n';
            else {
                cout << stk.back() << '\n';
                stk.pop_back();
            }
        }
        else if (command == "size") {
            cout << stk.size() << '\n';

        }
        else if (command == "empty") {
            cout << (stk.empty() && true) << '\n';
        }
        else if (command == "top") {
            if (stk.empty())    cout << "-1" << '\n';
            else cout << stk.back() << '\n';
        }
    }
    return 0;
}
