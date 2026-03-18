#include <iostream>
#include <vector>
using namespace std;

int N;

bool IsOverlapped(pair<int,int> line1, pair<int,int> line2){
    int ax1=line1.first;
    int ax2=line1.second;
    int bx1=line2.first;
    int bx2=line2.second;
    // 밑바닥 순서와 천장 순서가 엇갈리면 무조건 중간에서 만남.
    if ((ax1 < bx1 && ax2 > bx2) || (ax1 > bx1 && ax2 < bx2)) {
        return true;
    }
    if (ax1 == bx1 || ax2 == bx2) {
        return true;
    }
    return false;
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
        bool isOverlapped;
        //for: 선분2
        for(int j=0;j<N;j++){
            if(i==j){
                continue;
            }

            //선분1과 모든 선분이 겹치지 않으면 count++
            isOverlapped = IsOverlapped(arr[i],arr[j]);
            if(isOverlapped){
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