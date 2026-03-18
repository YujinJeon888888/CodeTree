#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int N;

int main() {
    cin >> N;
    //x,y
    vector<pair<int,int>> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i].first>>arr[i].second;
    }

    // Please write your code here.
    int resultArea=INT_MAX;
    //for: 점 하나 빼기
    for(int i=0;i<N;i++){
        pair<int,int> temp = arr[i];
        arr[i].first=-1;
        arr[i].second=-1;

        //직사각형 넓이 구하기
        int xMax=INT_MIN;
        int xMin=INT_MAX;
        int yMax=INT_MIN;
        int yMin=INT_MAX;

        //  for :
        for(int j=0;j<N;j++){
            if(arr[i].first==-1){
                continue;
            }
            // x최대, y최대, x최소, y최소 구하기
            xMax=max(xMax,arr[i].first);
            yMax=max(yMax,arr[i].second);
            xMin=min(xMin,arr[i].first);
            yMin=min(yMin,arr[i].second);
        }
            
        // 넓이 곱하기
        int width = abs(xMax-xMin);
        int height = abs(yMax-yMin);
        resultArea=min(resultArea,width*height);        
        //점 복구
        arr[i]=temp;
    }

    cout<<resultArea;
        

    return 0;
}