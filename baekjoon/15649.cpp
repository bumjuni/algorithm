#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> stk;
vector<int> visited(9);

void dfs() {
    if (stk.size() == M){  // 종료조건 -> 출력 후 종료
        for (int n : stk) {
            cout << n << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i=1; i<=N; ++i){
        if (visited[i]) continue;
        stk.push_back(i);
        visited[i] = 1;
        dfs();
        int back = stk.back();
        stk.pop_back();
        visited[back] = 0;

    }
}

int main(void) {
    cin >> N >> M;
    dfs();

    return 0;
}
