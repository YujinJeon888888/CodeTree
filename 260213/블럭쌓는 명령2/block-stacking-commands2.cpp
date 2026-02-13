#include <iostream>
#include <vector>
using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;
    vector<int> arr(N,0);
    int max=-1;
    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        for(int j=A[i];j<=B[i];j++){
            arr[j] += 1;
        }
    }

    // Please write your code here.
    
    for(int i=0;i<arr.size();i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max;

    return 0;
}