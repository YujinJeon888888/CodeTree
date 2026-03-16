#include <iostream>
#include <algorithm>
#define ARR_SIZE 100+1
using namespace std;

int N, K;
int candy[100], pos[100];

int main() {
    cin >> N >> K;
    //배열에 캔디넣기
    int arr[ARR_SIZE]={0};
    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
        arr[pos[i]]=candy[i];
    }

    
    
    int maxCandy=0;
    //for: 중심점
    for(int i=0;i<ARR_SIZE;i++){
        if(!(i-K>=0 && i+K<ARR_SIZE)){
            continue;
        }
        
        int candyCount=0;
        //for: 중심점-k~중심점+k까지 사탕 수 세기
        for(int j=i-K;j<=i+K;j++){
            candyCount+=arr[j];
        }
        //max갱신
        maxCandy=max(maxCandy,candyCount);
    }
        
    cout<<maxCandy;

    return 0;
}