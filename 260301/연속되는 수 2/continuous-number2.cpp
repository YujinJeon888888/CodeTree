#include <iostream>
#include <vector>
using namespace std;

int N;


int main() {
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int count=0;
    int maxCount=0;
    for(int i=0;i<N;i++){
        if(i==0){
            count=1;
            continue;
        }
        if(arr[i]==arr[i-1]){
            count++;
        }
        if(arr[i]!=arr[i-1]){
            count=1;
        }
        maxCount=max(maxCount,count);
    }

    cout<<maxCount;

    return 0;
}