#include <iostream>
#include <algorithm>
using namespace std;

int N;
int x[100];
int y[100];


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int answer=0;
    //for: 해고할 사람
    for(int i=0;i<N;i++){
        int time=0;
        //for: 남은 인원으로 운영되는 시간 카운트
        for(int j=0;j<N;j++){
            //해고할 사람이면 continue
            if(i==j){
                continue;
            }
            time+=(y[j]-x[j]);
        }
        //최대값 갱신
        answer=max(answer,time);
    }
    cout<<answer;
        
    return 0;
}