#include <iostream>
#include <utility> //pair
#include <vector>
#include <algorithm>//min
using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    //최단거리 초기화
    int minDis=0;
    //for: 누락 x,y 뽑기
    for(int i=0;i<n;i++){
        vector<pair>> coordinates;
        int dis=0;
        //출발지
        coordinates.push_back({x[0],y[0]});
        for(int j=1;j<n-1;j++){
            //1개 누락
            if(j==i){
                continue;
            }
            //누락 x,y외 모아넣기
            coordinates.push_back({x[i],y[i]});
        }
        //도착지
        coordinates.push_back({x[n-1],y[n-1]});
        //for: 누락 x,y제외 거리 구하기
        for(int i=0;i<n-2;i++){
            dis+=abs(coordinates[i].first-coordinates[i+1].first)+(coordinates[i].second-coordinates[i+1].second);
        }
        //min갱신
        minDis=min(minDis,dis);           
    }
    
    cout<<minDis;
    
    return 0;
}