#include <iostream>
#include <vector>
using namespace std;

int N;

bool IsOverlapped(pair<int,int> line1, pair<int,int> line2){
    int ax1=line1.first;
    int ax2=line1.second;
    int bx1=line2.first;
    int bx2=line2.second;
    // 🌟 안 겹치는 조건: 밑에서도 왼쪽, 위에서도 왼쪽 (혹은 그 반대)
    // 이 조건을 만족하지 않으면 무조건 겹치는 구간이 발생합니다.
    if ((ax1 < bx1 && ax2 < bx2) || (ax1 > bx1 && ax2 > bx2)) {
        return false; // 안 겹침
    }
    
    // 그 외의 모든 경우(엇갈림, 포함, 끝점 닿음)는 겹침!
    return true;
}

int main() {
    cin >> N;
    vector<pair<int,int>> arr(N);
    for (int i = 0; i < N; i++) {
        //시작점x, 끝점x
        cin >> arr[i].first >> arr[i].second;
    }

    // Please write your code here.
    int count=0;
    //for: 선분1
    for(int i=0;i<N;i++){
        bool isOverlapped=false;
        //for: 선분2
        for(int j=0;j<N;j++){
            if(i==j){
                continue;
            }

            //선분1과 모든 선분이 겹치지 않으면 count++
            if(IsOverlapped(arr[i],arr[j])){
                isOverlapped=true;
                break;
            }
        }

        if(!isOverlapped){
            count++;
        }
    }

    cout<<count;
    return 0;
}