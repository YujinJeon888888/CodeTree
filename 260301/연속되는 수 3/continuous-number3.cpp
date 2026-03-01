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
    int count=1;
    int maxCount=1;
    for(int i=1;i<N;i++){
        if((arr[i]<0&&arr[i-1]<0)||(arr[i]>0&&arr[i-1]>0)){
            count++;
        }
        else{
            count=1;
        }
        maxCount=max(maxCount,count);
    }
    cout<<maxCount;
    return 0;
}