#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Move {
    int a, b, c;
};

int main() {
    int n;
    cin >> n;

    vector<Move> moves(n);
    for (int i = 0; i < n; i++) {
        cin >> moves[i].a >> moves[i].b >> moves[i].c;
    }

    int maxResult = 0;

    // 1. 조약돌을 처음 1, 2, 3번 컵에 넣는 모든 경우를 다 해본다.
    for (int start = 1; start <= 3; start++) {
        int score = 0;
        vector<bool> temp(4, false); // 1, 2, 3번 컵 사용
        temp[start] = true; // 처음에 start 위치에 조약돌 넣기

        // 2. 저장해둔 n번의 이동을 시뮬레이션
        for (int i = 0; i < n; i++) {
            // a번 컵과 b번 컵의 '내용물'을 바꾼다.
            swap(temp[moves[i].a], temp[moves[i].b]);

            // 바꾼 후 c번 자리에 조약돌이 있으면 점수 획득
            if (temp[moves[i].c]) {
                score++;
            }
        }
        maxResult = max(maxResult, score);
    }

    cout << maxResult << endl;
    return 0;
}