#include <iostream>
#include <vector>
using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;
    //오프셋
    const int OFFSET = 100'000;
    //인덱스
    int index=0 + OFFSET;
    //흰색카운트
    vector<int> whiteLine(200'000,0);
    //검정카운트
    vector<int> blackLine(200'000,0);
    //최종색
    vector<int> answerColor(200'000,0); // 0: 안칠함, 1: 흰색, 2: 검은색, 3: 회색
    //답
    vector<int> answer(3,0);//0인덱스: 흰색, 1인덱스: 검은색, 3인덱스: 회색

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        //L은 흰색, R은 검은색 칠하기
        for (int j = 0; j < x[i]; j++) {
            
            // 1. 현재 서 있는 칸 칠하기 (R이든 L이든 이동하기 전에 칠합니다!)
            if (dir[i] == 'L') {
                whiteLine[index]++;
                answerColor[index] = 1;
            } else { // 'R'인 경우
                blackLine[index]++;
                answerColor[index] = 2;
            }
            
            // 2. 회색 조건 체크 (작성하신 논리 아주 완벽합니다!)
            // 앞서 흰/검으로 덮었어도, 여기서 조건 만족하면 다시 회색(3)이 되므로 안전!
            if (whiteLine[index] >= 2 && blackLine[index] >= 2) {
                answerColor[index] = 3; 
            }

            // 3. 다음 칸으로 이동하기 (⭐핵심: 마지막 바퀴에는 이동 안 함!⭐)
            if (j < x[i] - 1) { // j가 마지막(x[i]-1)이 아닐 때만 이동
                if (dir[i] == 'L') {
                    index--;
                } else {
                    index++;
                }
            }
        }
        
    }

    for(const auto& value: answerColor){
        if(value==1){//흰색
            answer[0]++;
        }
        else if(value==2){//검은색
            answer[1]++;
        }   
        else if(value==3){//회색
            answer[2]++;
        }

    }

    for(const auto& value: answer){
        cout<<value<<' ';
    }


    return 0;
}