#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int N;

int main() {
    cin >> N;
    //x,y
    vector<pair<int,int>> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    // Please write your code here.
    int answer=INT_MAX;
    //for: 점1
    for(int i=0;i<N;i++){
        //for: 점2
        for(int j=0;j<N;j++){
            if(i==j){
                continue;
            }
            //두 점 사이의 거리의 제곱 구하기
            answer=min(answer,((abs(arr[i].first-arr[j].first))*abs(arr[i].first-arr[j].first)
            +(abs(arr[i].second-arr[j].second))*abs(arr[i].second-arr[j].second)));
        }
    }
    cout<<answer;

    return 0;
}