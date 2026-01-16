#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int C; cin >> C;
    for (int i=0; i<C; ++i) {
        int N; cin >> N;
        vector<int> scores;
        float average = 0;
        for (int j=0; j<N; ++j) {
            int score; cin >> score;
            scores.push_back(score);
            average += score;
        }
        average /= N;
        float ratio = 0;
        for (int s : scores) {
            if (average < s)    ++ratio;
        }
        ratio = ratio / N * 100;
        printf("%.3f%%\n", ratio);
    }
}
