#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<string> split (const string& pages, char delemeter) {
    vector<string> result;
    string token;
    for (auto& c : pages) {
        if (c == delemeter) {
           result.push_back(token);
          token.clear();
        }
        else {
            token += c;
        }
    }
    result.push_back(token);

    return result;
}

int main(void) {
    while (true) {
        int N; // 문서의 총 페이지 수
        cin >> N;
        if (N == 0) break;

        string pages;
        cin >> pages;

        // 1. 콤마 단위로 나누기
        vector<string> tokens = split(pages, ',');

        // 2. 하이픈 단위로 나눠서 unordered_set에 넣기
        unordered_set<int> all_pages;
        for (auto& t : tokens) {
            vector<string> page = split(t, '-');
            int low = stoi(page.front());
            int high = stoi(page.back());
            while (low <= min(high, N)) {
                all_pages.insert(low++);
            }
        }
        cout << all_pages.size() << '\n';
    }

    return 0;
}
