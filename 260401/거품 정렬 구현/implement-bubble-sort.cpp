#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //정렬하장~
    for(int i=0;i<n;i++){//끝자리확정
        for(int j=0;j<n-1;j++){//요소비교하며 오른쪽으로 넘기기
            //왼쪽애가 오른쪽보다 크면 스왑하기
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(const auto val: arr){
        cout<<val<<' ';
    }
    return 0;
}