#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for: 해당 위치를 확정
    for(int i=0;i<n;i++){
        //while: 해당 위치와 직전위치 비교하며 swap반복(조건만족하는동안)
        int j = i+1;
        while(j-1>=0 && j<n && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    
    for(const auto val: arr){
        cout<<val<<' ';
    }
    return 0;
}