#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int answer=-1;
    //for: 시작 위치
    for(int i=0;i+k<n;i++){
        //for: 시작위치부터 끝위치까지 더하기
        int sum=0;
        for(int j=i;j+k<n;j++){
            //sum구하기
            sum+=arr[j];
        }
        //최대 sum갱신 
        answer=max(answer,sum);

    }
        
    cout<<answer;           
        
    return 0;
}