#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;

    vector<int> numbers;
    vector<int> dfs;


    for (int i=0; i<N; i++) {
        int num; cin >> num;
        numbers.push_back(num);
    }
    sort(numbers.begin(), numbers.end());

    for (int i=0; i<N; i++) {
        vector<int> visited(N);
        dfs.push_back(numbers[i]);
        visited[i] = 1;

        while (dfs.size() < M) {
            for (int j=0; j<N; j++) {
                if (!visited[j])    dfs.push_back(numbers[j]);
            }
        }
    }

}


// int main(void) {
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//     int N, M;
//     vector<int> numbers;
//     vector<int> container;
//     vector<string> sequences;

//     cin >> N >> M;
//     for (int i=0; i<N; i++) {
//         int number; cin >> number;
//         numbers.push_back(number);
//     }
//     sort(numbers.begin(), numbers.end());

//     int itr = 0;
//     container.push_back(itr);
//     itr++;

//     while (!container.empty()) {
//         if (container.size() == M) {
//             string sequence = "";
//             for (const int idx : container) {
//                 sequence += (numbers[idx] + '0');
//                 sequence += ' ';
//             }
//             sequences.insert(sequence);
//             container.pop_back();
//         }
//         if (itr == N) {
//             itr = container.back() + 1;
//             container.pop_back();
//         }
//         if (itr >= N)   break;
//         container.push_back(itr);
//         itr++;
//     }

//     for (const auto& it : sequences) {
//         cout << it << endl;
//     }

// }
