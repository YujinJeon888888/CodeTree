#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n,h,t;
    cin>>n>>h>>t;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minTotalCost=INT_MAX;

    //t길이만큼만 하는게 가장 최소비용이다.
    //지금 길이-h의 절댓값이 다듬는 길이다.

    //시작점 i를 0부터 n-t까지 이동시키며 확인
    for(int i=0;i<=n-t;i++){
        int currentCost=0;

        for(int j=i;j<i+t;j++){
            currentCost+=abs(arr[j]-h);
        }

        //최솟값갱신
        minTotalCost=min(minTotalCost,currentCost);


    }

    cout<<minTotalCost;
    return 0;
}