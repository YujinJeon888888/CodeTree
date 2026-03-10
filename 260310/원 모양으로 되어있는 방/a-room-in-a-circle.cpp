#include <iostream>
#include <climits>//INT_MAX
#include <algorithm>//min
using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    //총 인원 구하기
    int totalPeople=0;
    //minDis초기화
    int minDis=INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        totalPeople+=a[i];
    }

    // Please write your code here.
    //for: 이동 안하는 룸 고르기
    for(int i=0;i<n;i++){
        int noMoveRoom = i;
        int totalDis=0;
        //for: 이동 안하는 룸 제외하고 거리 구하기
        for(int j=0;j<n;j++){
            if(j==noMoveRoom){
                continue;
            }
            int dis=(j+n-i)%n;
            totalDis+=dis*a[j];
        }
        //minDis갱신
        minDis=min(minDis,totalDis);
    }
    
    cout<<minDis;
        
    return 0;
}