#include <iostream>
#include <string>
#include <vector>

using namespace std;

void get_balance(const string& line) {
    vector<int> stk;
    for (int i=0; i<line.size(); ++i) {
        if (line[i] == '.')   break;
        else if (isalpha(line[i]) || isblank(line[i]))  continue;

        else if (line[i] == '(' || line[i] == '[')  stk.push_back(line[i]);
        else if (line[i] == ')' && !stk.empty() && stk.back() == '(')   stk.pop_back();
        else if (line[i] == ']' && !stk.empty() && stk.back() == '[')   stk.pop_back();
        else {
            cout << "no" << '\n';
            return;
        }
    }
    if (stk.empty())    cout << "yes" << '\n';
    else             cout << "no" << '\n';

}

int main(void) {
    while (true) {
    string line;
        getline(cin, line);
        if (line[0] == '.') break;
        else get_balance(line);
    }
    return 0;
}
