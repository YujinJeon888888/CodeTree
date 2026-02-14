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
        for(int j=x[i];j>0;j--){
            if(dir[i]=='L'){
                whiteLine[index]++;
                answerColor[index]=1;
                index--;

                //회색 컨디션 체크
                if(whiteLine[index]>=2 && blackLine[index]>=2){
                    answerColor[index]=3;
                }
            }
            else{
                index++;
                blackLine[index]++;
                answerColor[index]=2;
                
                //회색 컨디션 체크
                if(whiteLine[index]>=2&&blackLine[index]>=2){
                    answerColor[index]=3;
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