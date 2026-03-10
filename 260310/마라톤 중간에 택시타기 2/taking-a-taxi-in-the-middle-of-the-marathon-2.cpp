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
        vector<pair<int,int>> coordinates;
        int dis=0;
        //출발지
        coordinates.push_back({x[0],y[0]});
        for(int j=1;j<n-1;j++){
            //1개 누락
            if(j==i){
                continue;
            }
            //누락 x,y외 모아넣기
            coordinates.push_back({x[j],y[j]});
        }
        //도착지
        coordinates.push_back({x[n-1],y[n-1]});
        //for: 누락 x,y제외 거리 구하기
        for(int j=0;j<coordinates.size()-1;j++){
            dis+=abs(coordinates[j].first-coordinates[j+1].first)+abs(coordinates[j].second-coordinates[j+1].second);
        }
        //min갱신
        minDis=min(minDis,dis);           
    }
    
    cout<<minDis;
    
    return 0;
}